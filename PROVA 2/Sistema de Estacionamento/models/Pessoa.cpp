#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(string nome, string cpf): nome(nome), cpf(cpf) {}

string Pessoa::getNome() { return nome; }
string Pessoa::getCpf() { return cpf; }

void Pessoa::setNome(string nome) { this->nome = nome; }
void Pessoa::setCpf(string cpf) { this->cpf = cpf; }

void Pessoa::exibirDados() {
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << cpf << endl;
}