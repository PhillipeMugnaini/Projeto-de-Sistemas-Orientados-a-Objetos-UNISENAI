#include "Vaga.h"

Vaga::Vaga(int numero) {
    this->numero = numero;
    this->ocupada = false;
}

bool Vaga::estaOcupada() { return ocupada; }
void Vaga::ocupar() { ocupada = true; }
void Vaga::liberar() { ocupada = false; }
int Vaga::getNumero() { return numero; }