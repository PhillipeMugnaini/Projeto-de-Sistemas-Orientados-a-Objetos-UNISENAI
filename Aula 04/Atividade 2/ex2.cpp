#include <iostream>
#include <string>

using namespace std;

class Cliente {
private:
    string nome;
    string endereco;
    int id;

public:
    Cliente(string nome, string endereco, int id) {
        this->nome = nome;
        this->endereco = endereco;
        this->id = id;
    }

    string getNome() {
        return nome;
    }

    string getEndereco() {
        return endereco;
    }

    int getId() {
        return id;
    }
};

class Pizza {
private:
    string sabor;
    string tamanho;
    double preco;

public:
    Pizza(string sabor, string tamanho, double preco) {
        this->sabor = sabor;
        this->tamanho = tamanho;
        this->preco = preco;
    }

    string getSabor() {
        return sabor;
    }

    string getTamanho() {
        return tamanho;
    }

    double getPreco() {
        return preco;
    }
};

class Pagamento {
private:
    string metodo;
    double valor;

public:
    Pagamento(string metodo, double valor) {
        this->metodo = metodo;
        this->valor = valor;
    }

    string getMetodo() {
        return metodo;
    }

    double getValor() {
        return valor;
    }
};

class Pedido {
private:
    Cliente cliente;
    Pizza pizza;
    Pagamento pagamento;

public:
    Pedido(Cliente cliente, Pizza pizza, Pagamento pagamento)
        : cliente(cliente), pizza(pizza), pagamento(pagamento) {}

    void exibirResumo() {
        cout << "=== RESUMO DO PEDIDO ===" << endl;
        cout << "Cliente: " << cliente.getNome() << endl;
        cout << "Endereco: " << cliente.getEndereco() << endl;
        cout << "Pizza: " << pizza.getSabor() << " (" << pizza.getTamanho() << ")" << endl;
        cout << "Preco: R$ " << pizza.getPreco() << endl;
        cout << "Pagamento: " << pagamento.getMetodo() << endl;
        cout << "Valor pago: R$ " << pagamento.getValor() << endl;
    }
};

int main() {

    Cliente c1("Davi Brito", "Rua A, 123", 1);
    Pizza p1("Calabresa", "Grande", 45.0);
    Pagamento pg1("Cartao", 45.0);

    Pedido pedido1(c1, p1, pg1);

    pedido1.exibirResumo();

    return 0;
}