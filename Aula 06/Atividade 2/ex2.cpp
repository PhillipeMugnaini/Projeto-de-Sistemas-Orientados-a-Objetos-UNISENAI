#include <iostream>

using namespace std;

class Mensagem{
    
    public:

        Mensagem(){
            cout << "Objeto criado" << endl;
        }

        ~Mensagem(){
            cout << "Objeto destruido" << endl;
        }
};

int main()
{
    cout << "-----------------" << endl;
    {
        Mensagem m1;
    }
    cout << "-----------------" << endl;
    {
        Mensagem m2;
        Mensagem m3;
    }
    cout << "-----------------" << endl;
    return 0;
}
