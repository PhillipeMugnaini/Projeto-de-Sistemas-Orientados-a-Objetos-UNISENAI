#include <iostream>
using namespace std;

class Player{
    public:

        string name;
        int hp;
        int atk;

        void stats(){
            cout << "========" << endl << "name: " << name << endl << "HP: " << hp << endl << "atk: " << atk << endl << "========" << endl;
        }

        void attack(Player *p){
            p->hp -= atk;
        }
};

int main()
{
    Player  p1,p2;

    p1.name = "Robson Stica";
    p1.hp = 100;
    p1.atk = 20;

    p2.name = "Lucas Oliveira";
    p2.hp = 100;
    p2.atk = 1;

    p1.stats();
    p2.stats();
    p1.attack(&p2);

    p1.stats();
    p2.stats();

    return 0;
};
