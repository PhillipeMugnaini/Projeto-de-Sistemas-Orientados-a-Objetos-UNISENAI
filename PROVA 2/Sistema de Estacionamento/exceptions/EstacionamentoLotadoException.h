#ifndef ESTACIONAMENTOLOTADOEXCEPTION_H
#define ESTACIONAMENTOLOTADOEXCEPTION_H

#include <exception>

// Definição da classe de exceção para estacionamento lotado, que herda de std::exception
class EstacionamentoLotadoException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Estacionamento lotado!";
    }
};

#endif