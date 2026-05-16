#include <iostream>
using namespace std;

class Aluno {
private:
    int matricula;
    string nome;
    string data_nasc;
    string email;
    string telefone;

public:
    Aluno(int matricula, string nome, string data_nasc,
           string email, string telefone) {

        this->matricula = matricula;
        this->nome = nome;
        this->data_nasc = data_nasc;
        this->email = email;
        this->telefone = telefone;
    }

    void showAluno() {
        cout << "-----------------" << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Nome: " << nome << endl;
        cout << "Data nascimento: " << data_nasc << endl;
        cout << "Email: " << email << endl;
        cout << "Telefone: " << telefone << endl;
    }
};

class Turma {
private:
    int id_turma;
    string nome;
    int anoLetivo;
    int semestre;

    // Vetor de ponteiros para Aluno
    Aluno* alunos[3];
    int qtdAlunos = 0;

public:
    Turma(int id_turma, string nome,
          int anoLetivo, int semestre) {

        this->id_turma = id_turma;
        this->nome = nome;
        this->anoLetivo = anoLetivo;
        this->semestre = semestre;
    }

    void addAluno(Aluno* aluno) {
        if (qtdAlunos < 3) {
            alunos[qtdAlunos] = aluno;
            qtdAlunos++;
        }
    }

    void showTurma() {
        cout << "\n======================" << endl;
        cout << "ID Turma: " << id_turma << endl;
        cout << "Nome: " << nome << endl;
        cout << "Ano Letivo: " << anoLetivo << endl;
        cout << "Semestre: " << semestre << endl;

        cout << "\nAlunos da turma:\n";

        for (int i = 0; i < qtdAlunos; i++) {
            alunos[i]->showAluno();
        }
    }
};

int main() {

    Aluno aluno1(1, "Lucas", "01/01/2007",
                  "lucas@email.com", "419999999");

    Aluno aluno2(2, "Maria", "02/02/2006",
                  "maria@email.com", "419888888");

    Aluno aluno3(3, "Joao", "03/03/2005",
                  "joao@email.com", "419777777");

    Aluno aluno4(4, "Ana", "04/04/2007",
                  "ana@email.com", "419666666");

    Aluno aluno5(5, "Carlos", "05/05/2006",
                  "carlos@email.com", "419555555");

    Turma turma1(101, "Turma A", 2025, 1);
    Turma turma2(102, "Turma B", 2025, 1);

    turma1.addAluno(&aluno1);
    turma1.addAluno(&aluno2);
    turma1.addAluno(&aluno3);

    turma2.addAluno(&aluno3);
    turma2.addAluno(&aluno4);
    turma2.addAluno(&aluno5);

    turma1.showTurma();
    turma2.showTurma();

    return 0;
}