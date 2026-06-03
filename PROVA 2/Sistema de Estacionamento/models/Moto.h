#ifndef MOTO_H
#define MOTO_H

#include "Veiculo.h"
#include <string>

class Moto : public Veiculo {
public:
    Moto(std::string placa, std::string modelo, Cliente* proprietario);
    float calcularTarifa(int horas) override;
};

#endif