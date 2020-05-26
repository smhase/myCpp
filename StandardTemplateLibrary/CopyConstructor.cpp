#include <iostream>

using namespace std;

class Animal {
private:
	string name;
public:
	Animal() { cout << "Animal Created" << endl; }
	// This is the copy constructor
	// :name(other.name) is used to set value. Here value of other.name will be set to name
	// Using const is important. Or else it might happen that the object from which the data is to be copied gets changed
	Animal(const Animal& other) :name(other.name) { cout << "Animal created by copying" << endl; }
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is : " << name << endl; }
};

int main() {
	Animal animal1;

	animal1.setName("Freddy");

	// This is where the copy constructor is called
	Animal animal2 = animal1;
	animal2.speak();
	animal2.setName("Bob");

	animal2 - setName("Bob");

	animal1.speak();
	animal2.speak();

	// Another way of calling copy constructor
	Animal animal3(animal1);
	animal3.speak();


	return 0;
}