#include <iostream>
#include <string>

using namespace std;

class Midia {
public:
    string urlFile;
};

class Conta {
public:
    int id;
    string email;
    string senha;
};

class Perfil {
public:
    string username;
    string bio;

    void editarPerfil(string username, string bio) {
        this->username = username;
        this->bio = bio;
    }
};

class Post {
public:
    Perfil autor;
    Midia midia;
    string legenda;

    void postar(string legenda, Perfil usuario, Midia imagem = Midia()) {
        this->legenda = legenda;
        this->autor = usuario;
        this->midia = imagem;
    }
};

class Direct {
public:
    Perfil remetente;
    Perfil destinatario;
    string mensagem;

    void enviarMensagem(string mensagem, Perfil remetente, Perfil destinatario) {
        this->mensagem = mensagem;
        this->remetente = remetente;
        this->destinatario = destinatario;
    }
};

class Comentario {
public:
    Perfil autor;
    string conteudo;

    void comentar(string conteudo, Perfil autor) {
        this->conteudo = conteudo;
        this->autor = autor;
    }
};

int main() {
    Perfil p1;
    p1.editarPerfil("Lucas_Oliveira", "fã de Jojo e gosta de coisas novas rs.");

    Perfil p2;
    p2.editarPerfil("Robson_Stica", "CHAD MOGGADOR DE BETA (LUCAS É O BETA)");

    Post novoPost;
    novoPost.postar("Olha as bolas de aço!!!!", p1);

    cout << "--- Feed ---" << endl;
    cout << "Usuario: " << novoPost.autor.username << endl;
    cout << "Legenda: " << novoPost.legenda << endl;
    cout << "Arquivo: " << novoPost.midia.urlFile << endl;

    Comentario c1;
    c1.comentar("Lmao!", p2);

    cout << "\n--- Comentarios ---" << endl;
    cout << c1.autor.username << " disse: " << c1.conteudo << endl;

    Direct dm;
    dm.enviarMensagem("Fala seu BETA!", p2, p1);

    cout << "\n--- Direct Message ---" << endl;
    cout << "De: " << dm.remetente.username << " | Para: " << dm.destinatario.username << endl;
    cout << "Mensagem: " << dm.mensagem << endl;

    return 0;
}