#include <iostream>
#include <string>

using namespace std;

class Produto{

private:
    string nome;
    float preco;

public:
    Produto(string nome, float preco){

        this->nome = nome;
        this->preco = preco;
    }
    
    string getNome(){
        return nome;
    }

    float getPreco(){
        return preco;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    void setPreco(float preco){
        this->preco = preco;
    }

    void exibirProduto(){
        cout << "Produto: " << nome << endl;
        cout << "Preco: " << preco << endl;
    }   

};



int main()
{

    Produto p1("AK-47", 1500.00);

    p1.exibirProduto();
    
    return 0;
}
