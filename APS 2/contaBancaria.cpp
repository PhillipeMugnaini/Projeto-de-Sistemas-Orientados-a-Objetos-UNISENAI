#include "contaBancaria.h"

ContaBancaria::ContaBancaria(
    string titular,
    int numeroConta,
    double saldoInicial
) {

    setTitular(titular);

    if (numeroConta > 0) {
        this->numeroConta = numeroConta;
    } else {
        this->numeroConta = 0;
    }

    if (saldoInicial >= 0) {
        saldo = saldoInicial;
    } else {
        saldo = 0;
    }
}

string ContaBancaria::getTitular() {
    return titular;
}

int ContaBancaria::getNumeroConta() {
    return numeroConta;
}

double ContaBancaria::getSaldo() {
    return saldo;
}

void ContaBancaria::setTitular(string titular) {

    if (!titular.empty()) {
        this->titular = titular;
    } else {
        cout << "Nome invalido!\n";
    }

}

void ContaBancaria::depositar(double valor) {

    if (valor > 0) {

        saldo += valor;

        cout << "Deposito de R$ "
             << valor
             << " realizado com sucesso!\n";

    } else {

        cout << "Valor invalido!\n";

    }

}

void ContaBancaria::sacar(double valor) {

    if (valor <= 0) {

        cout << "Valor invalido!\n";

        return;
    }

    if (valor > saldo) {

        cout << "Saldo insuficiente!\n";

        return;

    }

    saldo -= valor;

    cout << "Saque realizado com sucesso!\n";

}

void ContaBancaria::transferir(
    ContaBancaria& destino,
    double valor
) {

    if (valor <= 0) {

        cout << "Valor invalido!\n";

        return;

    }

    if (valor > saldo) {

        cout << "Saldo insuficiente!\n";

        return;

    }

    saldo -= valor;

    destino.saldo += valor;

    cout << "Transferencia realizada!\n";

}

void ContaBancaria::exibirDados() {

    cout << "\n---------------------\n";

    cout << "Titular: "
         << titular
         << endl;

    cout << "Conta: "
         << numeroConta
         << endl;

    cout << "Saldo: R$ "
         << saldo
         << endl;

}