#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {

protected:
    string titular;
    int numeroConta;
    double saldo;

public:

    ContaBancaria(
        string titular,
        int numeroConta,
        double saldoInicial
    );

    virtual ~ContaBancaria() {}

    string getTitular();
    int getNumeroConta();
    double getSaldo();

    void setTitular(string titular);

    void depositar(double valor);

    virtual void sacar(double valor);

    void transferir(
        ContaBancaria& destino,
        double valor
    );

    virtual void exibirDados() = 0;
};

#endif