#include <iostream>
using namespace std;

class Carro{
    public:

        string marca;
        string modelo;
        int velocidade;

        void acelerar(){
            cout << "O carro " << modelo << " da marca " << marca << " está acelerando a " << velocidade << " KM/h" << endl;
        }
};

int main(){
    
    Carro c1,c2;

    c1.marca = "Nissan";
    c1.modelo = "March";
    c1.velocidade = 120;

    c2.marca = "Renaut";
    c2.modelo = "Twingo";
    c2.velocidade = 300;

    c1.acelerar();
    c2.acelerar();


    return 0;
};
