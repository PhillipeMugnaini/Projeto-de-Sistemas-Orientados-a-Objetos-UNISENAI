#include <iostream>
using namespace std;

class Conta {
private:
    double saldo;

public:
    Conta(double valorInicial) {
        if (valorInicial < 0) {
            saldo = 0;
        } else {
            saldo = valorInicial;
        }
    }

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
        }
    }

    bool sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            return true;
        }

        return false;
    }

    double getSaldo() {
        return saldo;
    }
};

int main() {
    Conta conta(1000);

    conta.depositar(500);

    if (conta.sacar(300)) {
        cout << "Saque realizado com sucesso!" << endl;
    } else {
        cout << "Saldo insuficiente!" << endl;
    }

    cout << "Saldo final: R$ " << conta.getSaldo() << endl;

    return 0;
}