#include <iostream>
using namespace std;
class Weapon {
   public:
   Weapon() { cout << "Loading weapon features via constructor.\n"; }

   void features() { cout << "Loading weapon features via function.\n"; }
};
class Bomb : public Weapon {
   public:
   void features() {
      this->Weapon::features();
      cout << "Loading bomb features.\n";
   }
};
class Gun : public Weapon {
   public:
   void features() {
      this->Weapon::features();
      cout << "Loading gun features.\n";
   }
};

int main() {
   Weapon *w;
   Bomb *b;
   Gun *g;
   
    w -> features();
    b -> features();
    g -> features();

   return 0;
}