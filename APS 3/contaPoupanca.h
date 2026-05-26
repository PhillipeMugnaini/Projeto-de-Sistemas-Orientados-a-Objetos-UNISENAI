#define CONTAPOUPANCA_H

#include "contaBancaria.h"

class ContaPoupanca
: public ContaBancaria {

public:

    ContaPoupanca(
        string titular,
        int numero,
        double saldo
    );

    void renderJuros();

    void exibirDados()
    override;

};

