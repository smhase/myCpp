#include <iostream>

using namespace std;

class Weapon{
    public:
        void loadFeatures(){
            cout << "Loading Features \n";
        }
};

class Bomb : public Weapon {
    public:
        void loadFeatures(){
            cout << "Loading Bomb Feature \n"; 
        }
};

class Gun : public Weapon {
    public:
        void loadFeatures(){
            cout << "Loading Gun features \n";
        }
};

int main() {
    Weapon *w = new Weapon;
    Bomb *b = new Bomb;
    Gun *g = new Gun;

    w -> loadFeatures();
    b -> loadFeatures();
    g -> loadFeatures();

    return 0;
}