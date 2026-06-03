#ifndef VEICULO_H
#define VEICULO_H

#include <string>
#include "Cliente.h"

class Veiculo {
protected:
    std::string placa;
    std::string modelo;
    Cliente* proprietario;
    int numeroVaga; // Adicionado para sabermos qual vaga o veículo ocupou

public:
    Veiculo(std::string placa, std::string modelo, Cliente* proprietario);
    virtual float calcularTarifa(int horas) = 0;
    
    std::string getPlaca();
    int getNumeroVaga();
    void setNumeroVaga(int numero);

    virtual void exibirDados();
    virtual ~Veiculo() = default;
};

#endif