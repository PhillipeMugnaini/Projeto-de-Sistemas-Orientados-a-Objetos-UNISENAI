#include <iostream>
#include <string>

using namespace std;

class Cliente{
    private:
        string nome;
        string email;
    public:
        Cliente(string nome, string email){
            this->nome = nome;
            this->email = email;
        }
        string getNome(){
            return nome;
        }
        string getEmail(){
            return email;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        void setEmail(string email){
            this->email = email;
        }
};

class Pedido{
    private:
        int id_pedido;
        float valor_total;
        Cliente cliente;
    public:
        Pedido(int id_pedido, float valor_total, Cliente cliente) : cliente(cliente){
            this->id_pedido = id_pedido;
            this->valor_total = valor_total;
        }
        int getIdPedido(){
            return id_pedido;
        }
        float getValorTotal(){
            return valor_total;
        }
        Cliente getCliente(){
            return cliente;
        }
        void setIdPedido(int id_pedido){
            this->id_pedido = id_pedido;
        }
        void setValorTotal(float valor_total){
            this->valor_total = valor_total;
        }
        void setCliente(Cliente cliente){
            this->cliente = cliente;
        }

        void exibirPedido(){
            cout << "ID do Pedido: " << id_pedido << endl;
            cout << "Valor Total: " << valor_total << endl;
            cout << "Cliente: " << cliente.getNome() << endl;
            cout << "Email: " << cliente.getEmail() << endl;
        }
    
};


int main()
{
    Cliente c1("João Silva", "joao.silva@email.com");
    Pedido p1(1, 100.0, c1);

    p1.exibirPedido();


    return 0;
}
