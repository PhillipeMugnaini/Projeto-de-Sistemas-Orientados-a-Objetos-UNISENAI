#include <iostream>
#include <limits> // Necessário para usar o numeric_limits na limpeza do buffer

#include "./services/Estacionamento.h"

using namespace std;

int main() {

    Estacionamento estacionamento;
    int opcao;

    do {
        cout << "\n================================";
        cout << "\n SISTEMA DE ESTACIONAMENTO";
        cout << "\n================================";
        cout << "\n1 - Cadastrar Cliente";
        cout << "\n2 - Registrar Entrada";
        cout << "\n3 - Registrar Saida";
        cout << "\n4 - Listar Clientes";
        cout << "\n5 - Listar Veiculos";
        cout << "\n6 - Listar Vagas";
        cout << "\n0 - Sair";
        cout << "\n\nOpcao: ";

        cin >> opcao;

        // Limpa o buffer de entrada para evitar problemas com os getlines dos menus seguintes
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        try {
            switch(opcao) {
                case 1:
                    estacionamento.cadastrarCliente();
                    break;

                case 2:
                    estacionamento.registrarEntrada();
                    break;

                case 3:
                    estacionamento.registrarSaida();
                    break;

                case 4:
                    estacionamento.listarClientes();
                    break;

                case 5:
                    estacionamento.listarVeiculos();
                    break;

                case 6:
                    estacionamento.listarVagas();
                    break;

                case 0:
                    cout << "\nEncerrando sistema...\n";
                    break;

                default:
                    cout << "\nOpcao invalida!\n";
            }
        }
        // Captura por referência constante para evitar cópias desnecessárias
        catch(const exception& e) {
            cout << "\n[ERRO NO SISTEMA]: " << e.what() << endl;
        }

    } while(opcao != 0);

    return 0;
}