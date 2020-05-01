#include <iostream>
using namespace std;
class Weapon {
   public:
   Weapon() { cout << "Loading weapon features.\n"; }

   void features() { cout << "Loading weapon features.\n"; }
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
class Loader {
   public:
   void loadFeatures(Weapon *weapon) {
      weapon->features();
   }
};
int main() {
   Loader *l = new Loader;
   Weapon *w;
   Bomb b;
   Gun g;
   w = &b;
   l->loadFeatures(b);
   w = &g;
   l->loadFeatures(g);
   return 0;
}