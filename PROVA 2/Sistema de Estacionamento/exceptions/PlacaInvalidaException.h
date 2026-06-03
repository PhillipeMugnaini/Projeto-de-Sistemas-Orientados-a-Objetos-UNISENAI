#ifndef PLACAINVALIDAEXCEPTION_H
#define PLACAINVALIDAEXCEPTION_H

#include <exception>

// Exceção personalizada para placa inválida
class PlacaInvalidaException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Placa invalida!";
    }
};

#endif