#ifndef ESTACIONAMENTO_H
#define ESTACIONAMENTO_H

#include <vector>
#include "../models/Cliente.h"
#include "../models/Funcionario.h"
#include "../models/Veiculo.h"
#include "../models/Vaga.h"

class Estacionamento {
private:
    std::vector<Cliente*> clientes;
    std::vector<Funcionario*> funcionarios;
    std::vector<Veiculo*> veiculos;
    std::vector<Vaga> vagas;

public:
    Estacionamento();

    void cadastrarCliente();
    void cadastrarFuncionario();

    void registrarEntrada();
    void registrarSaida();

    void listarClientes();
    void listarVeiculos();
    void listarVagas();

    ~Estacionamento();
};

#endif