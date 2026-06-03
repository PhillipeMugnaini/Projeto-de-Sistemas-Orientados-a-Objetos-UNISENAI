#include "Estacionamento.h"
#include <iostream>

#include "../models/Cliente.h"
#include "../models/Funcionario.h"
#include "../models/Carro.h"
#include "../models/Moto.h"
#include "../models/Caminhao.h"

#include "../exceptions/PlacaInvalidaException.h"
#include "../exceptions/EstacionamentoLotadoException.h"
#include "../exceptions/VeiculoNaoEncontradoException.h"

using namespace std;

Estacionamento::Estacionamento() {
    for(int i = 1; i <= 10; i++) {
        vagas.push_back(Vaga(i));
    }
}

void Estacionamento::cadastrarCliente() {
    string nome, cpf, telefone;

    cout << "\nNome: ";
    getline(cin, nome);

    cout << "CPF: ";
    getline(cin, cpf);

    cout << "Telefone: ";
    getline(cin, telefone);

    Cliente* cliente = new Cliente(nome, cpf, telefone);
    clientes.push_back(cliente);

    cout << "\nCliente cadastrado!\n";
}

void Estacionamento::cadastrarFuncionario() {
    string nome, cpf, cargo;

    cout << "\nNome: ";
    getline(cin, nome);

    cout << "CPF: ";
    getline(cin, cpf);

    cout << "Cargo: ";
    getline(cin, cargo);

    Funcionario* func = new Funcionario(nome, cpf, cargo);
    funcionarios.push_back(func);

    cout << "\nFuncionário cadastrado!\n";
}

void Estacionamento::listarClientes() {
    cout << "\n=== CLIENTES ===\n";
    for(Cliente* cliente : clientes) {
        cliente->exibirDados();
        cout << endl;
    }
}

void Estacionamento::registrarEntrada() {
    if(clientes.empty()) {
        cout << "\nCadastre um cliente primeiro!\n";
        return;
    }

    // Procura vaga livre real no sistema
    Vaga* vagaDisponivel = nullptr;
    for(size_t i = 0; i < vagas.size(); i++) {
        if(!vagas[i].estaOcupada()) {
            vagaDisponivel = &vagas[i];
            break;
        }
    }

    // Se não há vaga livre, dispara a exceção correspondente
    if(vagaDisponivel == nullptr) {
        throw EstacionamentoLotadoException();
    }

    string placa, modelo;
    int tipo;

    cout << "\nPlaca (mínimo 7 caracteres): ";
    cin >> placa;

    // Dispara exceção caso a placa seja muito curta
    if(placa.length() < 7) {
        throw PlacaInvalidaException();
    }

    cout << "Modelo: ";
    cin >> modelo;

    cout << "\n1 - Carro\n2 - Moto\n3 - Caminhão\nOpção: ";
    cin >> tipo;

    // Vincula o veículo ao último cliente inserido para fins de teste dinâmico
    Cliente* proprietario = clientes.back();
    Veiculo* veiculo = nullptr;

    switch(tipo) {
        case 1: veiculo = new Carro(placa, modelo, proprietario); break;
        case 2: veiculo = new Moto(placa, modelo, proprietario); break;
        case 3: veiculo = new Caminhao(placa, modelo, proprietario); break;
        default:
            cout << "Tipo inválido!\n";
            return;
    }

    // Vincula o número da vaga ao veículo e ocupa a vaga física
    veiculo->setNumeroVaga(vagaDisponivel->getNumero());
    vagaDisponivel-> ocupar();
    
    veiculos.push_back(veiculo);

    cout << "\nEntrada registrada com sucesso na Vaga " << vagaDisponivel->getNumero() << "!\n";
}

void Estacionamento::listarVeiculos() {
    cout << "\n=== VEÍCULOS ===\n";
    for(Veiculo* veiculo : veiculos) {
        veiculo->exibirDados();
        cout << endl;
    }
}

void Estacionamento::listarVagas() {
    cout << "\n=== VAGAS ===\n";
    for(Vaga vaga : vagas) {
        cout << "Vaga " << vaga.getNumero() 
             << (vaga.estaOcupada() ? " - Ocupada" : " - Livre") << endl;
    }
}

void Estacionamento::registrarSaida() {
    string placa;
    cout << "\nPlaca: ";
    cin >> placa;

    for(auto it = veiculos.begin(); it != veiculos.end(); it++) {
        if((*it)->getPlaca() == placa) {
            
            // Simula um tempo decorrido de 3 horas para acionar o cálculo da tarifa polimórfica
            int horasSimuladas = 3;
            float tarifa = (*it)->calcularTarifa(horasSimuladas);

            cout << "\n=== RECIBO DE PAGAMENTO ===";
            cout << "\nPlaca: " << (*it)->getPlaca();
            cout << "\nTempo Permanência: " << horasSimuladas << " horas";
            cout << "\nValor Total: R$ " << tarifa << endl;

            // Encontra a vaga física correspondente para liberá-la
            int numVagaParaLiberar = (*it)->getNumeroVaga();
            for(size_t i = 0; i < vagas.size(); i++) {
                if(vagas[i].getNumero() == numVagaParaLiberar) {
                    vagas[i].liberar();
                    break;
                }
            }

            delete *it;
            veiculos.erase(it);

            cout << "\nSaída registrada com sucesso!\n";
            return;
        }
    }

    // Se percorreu todo o ciclo e não encontrou o carro, dispara a exceção correspondente
    throw VeiculoNaoEncontradoException();
}

Estacionamento::~Estacionamento() {
    for(Cliente* cliente : clientes) delete cliente;
    for(Funcionario* funcionario : funcionarios) delete funcionario;
    for(Veiculo* veiculo : veiculos) delete veiculo;
}