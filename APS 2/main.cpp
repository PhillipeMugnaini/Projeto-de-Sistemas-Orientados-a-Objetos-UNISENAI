#include "contaBancaria.h"

int main() {

    ContaBancaria conta1(
        "Phillipe",
        123,
        1000
    );

    ContaBancaria conta2(
        "Joao",
        456,
        500
    );

    cout << "=== DADOS INICIAIS ===\n";

    conta1.exibirDados();
    conta2.exibirDados();

    cout << "\n=== OPERACOES ===\n";

    conta1.depositar(300);

    conta1.sacar(200);

    conta1.transferir(
        conta2,
        250
    );

    cout << "\n=== DADOS FINAIS ===\n";

    conta1.exibirDados();

    conta2.exibirDados();

    return 0;

}