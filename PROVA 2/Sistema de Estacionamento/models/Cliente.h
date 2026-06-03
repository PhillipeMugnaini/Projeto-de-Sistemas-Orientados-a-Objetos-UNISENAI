#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"
#include <string>

class Cliente : public Pessoa {
private:
    std::string telefone;

public:
    Cliente(std::string nome, std::string cpf, std::string telefone);
    std::string getTelefone();
    void exibirDados() override;
};

#endif