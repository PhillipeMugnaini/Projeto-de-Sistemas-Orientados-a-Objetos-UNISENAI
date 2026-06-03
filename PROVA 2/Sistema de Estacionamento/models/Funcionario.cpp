#include "Funcionario.h"
#include <iostream>

using namespace std;

Funcionario::Funcionario(string nome, string cpf, string cargo) : Pessoa(nome, cpf) {
    this->cargo = cargo;
}

string Funcionario::getCargo() { return cargo; }

void Funcionario::exibirDados() {
    Pessoa::exibirDados();
    cout << "Cargo: " << cargo << endl;
}