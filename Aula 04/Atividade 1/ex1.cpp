#include <iostream>
#include <string>

using namespace std;

class Aluno {

    private:
         string nome;
         int matricula;

    public:
        void setNome(string nome) {
            this->nome = nome;
        }
        string getNome() {
            return this->nome;
        }
        void exibirDados() {
            cout << "Nome: " << this->nome << endl;
            cout << "Matricula: " << this->matricula << endl;
        }

};

int main()
{

    Aluno aluno1;
    aluno1.setNome("João");
    aluno1.exibirDados();

    return 0;
}
