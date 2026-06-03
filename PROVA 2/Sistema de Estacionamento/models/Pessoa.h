#ifndef PESSOA_H
#define PESSOA_H

#include <string>


// Classe base para representar uma pessoa
class Pessoa {
protected:
    std::string nome;
    std::string cpf;

public:
    Pessoa(std::string nome, std::string cpf);

    std::string getNome();
    std::string getCpf();

    void setNome(std::string nome);
    void setCpf(std::string cpf);

    virtual void exibirDados();
    virtual ~Pessoa() = default; // Adicionado: Destrutor virtual indispensável para herança
};

#endif