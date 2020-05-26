#include <iostream>

using namespace std;

// If all functions are virtual then the class is abstract
class Animal {
public:
	virtual void speak() = 0;
};

class Dog: public Animal {
public:
	virtual void speak() {
		cout << "Woof!" << endl;
	}
};

class Labrador : public Dog {
public:
	virtual void run() {
		cout << "Labrador" << endl;
	}
};

int main() {

	Labrador lab;
	lab.run();
	lab.speak();

	return 0;
}