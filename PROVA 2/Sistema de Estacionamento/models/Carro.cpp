#include "Carro.h"

using namespace std;

Carro::Carro(string placa, string modelo, Cliente* proprietario) : Veiculo(placa, modelo, proprietario) {}

float Carro::calcularTarifa(int horas) {
    return horas * 7.50;
}