#include "Veiculo.h"
#include <iostream>

//Implementação dos métodos da classe Veiculo
Veiculo::Veiculo(string placa, string modelo, Cliente* proprietario) {
    this->placa = placa;
    this->modelo = modelo;
    this->proprietario = proprietario;
}

string Veiculo::getPlaca() {
    return placa;
}

//Exibe os dados do veículo, incluindo a placa, modelo e nome do proprietário
void Veiculo::exibirDados() {
    cout << "Placa: " << placa << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Proprietário: " << proprietario->getNome() << endl;
}