#include <iostream>
using namespace std;

class Conta{

    public:

        double saldo;

        void depositar(double valor){
            saldo += valor;
        }
};

class Pessoa{
    public:
        string nome;
        int idade;

        void aniversario(){
            idade++;
        }
};


int main(){   

    // Conta c1;
    // c1.saldo = 100;
    // c1.depositar(50);
    // cout << c1.saldo << endl;

    // c1.depositar(13);
    // cout << c1.saldo << endl;

    // return 0;

    Pessoa p1, p2;

    p1.nome = "Ana";
    p1.idade = 20;

    p2.nome = "Ana";
    p2.idade = 20;

    p1.aniversario();
    cout << p1.idade << endl;
}



