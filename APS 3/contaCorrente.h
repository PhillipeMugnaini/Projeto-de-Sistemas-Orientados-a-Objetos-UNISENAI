#define CONTACORRENTE_H

#include "contaBancaria.h"

class ContaCorrente
: public ContaBancaria {

private:
    double taxaSaque;

public:

    ContaCorrente(
        string titular,
        int numero,
        double saldo,
        double taxa
    );

    void sacar(
        double valor
    ) override;

    void exibirDados()
    override;
};

