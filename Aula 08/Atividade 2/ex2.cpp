#include <iostream>
using namespace std;


class Motor {
private:
    int potencia;

public:
    Motor(int potencia) {
        this->potencia = potencia;
        cout << "Motor de " << potencia << "CV criado." << endl;
    }

    void ligar() {
        cout << "Motor ligado." << endl;
    }

    ~Motor() {
        cout << "Motor destruido." << endl;
    }
};

class Carro {
private:
    string modelo;
    string cor;
    int ano;
    string chassi;
    Motor* motor;

public:
    Carro(string modelo, string cor, int ano, string chassi, int potenciaMotor) {
        this->modelo = modelo;
        this->cor = cor;
        this->ano = ano;
        this->chassi = chassi;

        motor = new Motor(potenciaMotor);

        cout << "Carro " << modelo << " criado." << endl;
    }

    void exibir() {
        cout << "Carro: " << modelo << endl;
        cout << "Cor: " << cor << endl;
        cout << "Ano: " << ano << endl;
        cout << "Chassi: " << chassi << endl;
        motor->ligar();
    }

    ~Carro() {
        delete motor;

        cout << "Carro " << modelo << " destruido." << endl;
    }
};

int main() {

    Carro carro1("Fusca", "Vermelho", 2020, "123456", 100);
    Carro carro2("Civic", "Prata", 2021, "789012", 150);
    Carro carro3("Ferrari", "Vermelho", 2022, "345678", 500);

    cout << endl;

    carro1.exibir();
    carro2.exibir();
    carro3.exibir();

    return 0;
}

