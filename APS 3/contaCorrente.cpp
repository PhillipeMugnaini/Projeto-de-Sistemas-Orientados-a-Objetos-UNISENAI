#include "contaCorrente.h"

ContaCorrente::ContaCorrente(
    string titular,
    int numero,
    double saldo,
    double taxa
)

: ContaBancaria(
    titular,
    numero,
    saldo
)

{

    taxaSaque =
        taxa;

}

void ContaCorrente::sacar(
    double valor
) {

    double total =
        valor
        +
        taxaSaque;

    if (
        total
        <=
        saldo
    ) {

        saldo -= total;

        cout
        << "Saque conta corrente\n";

    }

}

void ContaCorrente::exibirDados() {

    cout
    << "\n=== CONTA CORRENTE ===\n";

    cout
    << "Titular: "
    << titular
    << endl;

    cout
    << "Saldo: "
    << saldo
    << endl;

}