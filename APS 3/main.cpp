#include "contaCorrente.h"
#include "contaPoupanca.h"

int main() {

    ContaBancaria* contas[2];

    contas[0] =
        new ContaCorrente(
            "Phillipe",
            123,
            1500,
            10
        );

    contas[1] =
        new ContaPoupanca(
            "Eduardo",
            890,
            800
        );

    cout
    << "\n=== DADOS ===\n";

    for (
        int i = 0;
        i < 2;
        i++
    ) {

        contas[i]
        ->
        exibirDados();

    }

    cout
    << "\n=== OPERACOES ===\n";

    contas[0]
    ->
    sacar(
        100
    );

    contas[1]
    ->
    depositar(
        200
    );

    cout
    << "\n=== RESULTADO ===\n";

    for (
        int i = 0;
        i < 2;
        i++
    ) {

        contas[i]
        ->
        exibirDados();

        delete contas[i];

    }

    return 0;
}