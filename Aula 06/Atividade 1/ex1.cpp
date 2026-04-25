#include <iostream>

using namespace std;

class Pessoa{

    private:
        string nome;
        int idade;
    
    public:

        Pessoa(){
            nome = "Indefinido";
            idade = 0;
        }

        Pessoa(string nome){
            this->nome = nome;
            idade = 0;
        }

        Pessoa(string nome, int idade){
            this->nome = nome;
            this->idade = idade;
        }

        string getNome(){
            return nome;
        }
        int getIdade(){
            return idade;
        }

        void exibir(){
            cout << "Nome: " << getNome() << endl << "Idade: " << getIdade() << endl;
            cout << "-----------------" << endl;
            
        }

};

int main(int argc, char const *argv[])
{
    Pessoa p1;
    Pessoa p2("Robson Stica");
    Pessoa p3("Lucas Oliveira",18);

    p1.exibir();
    p2.exibir();
    p3.exibir();

    return 0;
}
