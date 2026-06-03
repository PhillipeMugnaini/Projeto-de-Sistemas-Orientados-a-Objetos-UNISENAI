#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"
#include <string>

class Carro : public Veiculo {
public:
    Carro(std::string placa, std::string modelo, Cliente* proprietario);
    float calcularTarifa(int horas) override;
};

#endif