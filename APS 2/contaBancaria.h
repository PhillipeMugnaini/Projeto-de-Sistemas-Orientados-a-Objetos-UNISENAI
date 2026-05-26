#define CONTABANCARIA_H

#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
private:
    string titular;
    int numeroConta;
    double saldo;

public:

    ContaBancaria(string titular, int numeroConta, double saldoInicial);

    string getTitular();
    int getNumeroConta();
    double getSaldo();

    void setTitular(string titular);

    void depositar(double valor);
    void sacar(double valor);
    void transferir(ContaBancaria& destino, double valor);

    void exibirDados();
};

