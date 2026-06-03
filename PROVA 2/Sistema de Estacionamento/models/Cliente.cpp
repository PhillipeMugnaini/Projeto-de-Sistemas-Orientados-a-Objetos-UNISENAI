#include "Cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente(string nome, string cpf, string telefone) : Pessoa(nome, cpf) {
    this->telefone = telefone;
}

string Cliente::getTelefone() { return telefone; }

void Cliente::exibirDados() {
    Pessoa::exibirDados();
    cout << "Telefone: " << telefone << endl;
}