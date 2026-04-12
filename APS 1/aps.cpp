#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
private:
    string titular;
    int numeroConta;
    double saldo;

public:
    ContaBancaria(string titular, int numeroConta, double saldoInicial) {
        this->titular = titular;
        this->numeroConta = numeroConta;
        this->saldo = saldoInicial;
    }

    string getTitular() {
        return titular;
    }

    int getNumeroConta() {
        return numeroConta;
    }

    double getSaldo() {
        return saldo;
    }

    void setTitular(string titular) {
        this->titular = titular;
    }

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Deposito de R$" << valor << " realizado com sucesso!\n";
        } else {
            cout << "Valor invalido para deposito!\n";
        }
    }

    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            cout << "Saque de R$" << valor << " realizado com sucesso!\n";
        } else {
            cout << "Saldo insuficiente ou valor invalido!\n";
        }
    }

    void transferir(ContaBancaria &destino, double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            destino.saldo += valor;
            cout << "Transferencia de R$" << valor << " realizada com sucesso!\n";
        } else {
            cout << "Transferencia nao realizada!\n";
        }
    }

    void exibirDados() {
        cout << "\nTitular: " << titular << endl;
        cout << "Conta: " << numeroConta << endl;
        cout << "Saldo: R$" << saldo << endl;
    }
};

int main() {

    ContaBancaria conta1("Phillipe", 123, 1000.0);
    ContaBancaria conta2("Joao", 456, 500.0);

    cout << "=== Dados iniciais ===" << endl;
    conta1.exibirDados();
    conta2.exibirDados();

    conta1.depositar(200);
    conta1.sacar(150);
    conta1.transferir(conta2, 300);

    cout << "\n=== Dados finais ===" << endl;
    conta1.exibirDados();
    conta2.exibirDados();

    return 0;
}