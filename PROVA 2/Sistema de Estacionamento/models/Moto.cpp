#include "Moto.h"

using namespace std;

Moto::Moto(string placa, string modelo, Cliente* proprietario) : Veiculo(placa, modelo, proprietario) {}

float Moto::calcularTarifa(int horas) {
    return horas * 3.00;
}