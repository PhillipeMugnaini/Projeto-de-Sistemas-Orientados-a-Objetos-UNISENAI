#include "Caminhao.h"

using namespace std;

Caminhao::Caminhao(string placa, string modelo, Cliente* proprietario) : Veiculo(placa, modelo, proprietario) {}

float Caminhao::calcularTarifa(int horas) {
    return horas * 15.00;
}