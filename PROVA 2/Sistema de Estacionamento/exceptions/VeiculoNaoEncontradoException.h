#ifndef VEICULONAOENCONTRADOEXCEPTION_H
#define VEICULONAOENCONTRADOEXCEPTION_H

#include <exception>

// Exceção personalizada para veículo não encontrado
class VeiculoNaoEncontradoException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Veiculo nao encontrado!";
    }
};

#endif