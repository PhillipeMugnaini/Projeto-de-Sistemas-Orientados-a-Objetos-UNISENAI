#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Pessoa.h"
#include <string>

class Funcionario : public Pessoa {
private:
    std::string cargo;

public:
    Funcionario(std::string nome, std::string cpf, std::string cargo);
    std::string getCargo();
    void exibirDados() override;
};

#endif