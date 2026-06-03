#ifndef VAGA_H
#define VAGA_H

class Vaga {
private:
    int numero;
    bool ocupada;

public:
    Vaga(int numero);
    bool estaOcupada();
    void ocupar();
    void liberar();
    int getNumero();
};

#endif