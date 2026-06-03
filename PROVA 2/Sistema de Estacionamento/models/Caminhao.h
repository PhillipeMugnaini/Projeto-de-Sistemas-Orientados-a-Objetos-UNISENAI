#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "Veiculo.h"
#include <string>

class Caminhao : public Veiculo {
public:
    Caminhao(std::string placa, std::string modelo, Cliente* proprietario);
    float calcularTarifa(int horas) override;
};

#endif