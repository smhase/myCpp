#include <iostream>

using namespace std;

class Test {
private:
	int id;
	string name;

public:
	Test() : id(0), name("") {}
	Test(int id, string name) : id(id), name(name) {}

	void print() {
		cout << id << " : " << name << endl;
	}

	// Assignment operator overloaded
	const Test& operator=(const Test& other) {

		cout << "Assigning" << endl;
		id = other.id;
		name = other.name;
		return *this;
	}

	// Copy constructor
	Test(const Test& other) {
		cout << "Copy constructor" << endl;
		id = other.id;
		name = other.name;
	}
};

int main() {

	Test test1(10, "Mike");
	test1.print();

	Test test2(20, "Bob");

	// This works without overloading
	// C++ does a shallow copy
	// But there might be cases where for example, you need unique id even when you copy
	// Also when cases where test1 has pointer. Doing shallow copy will result in test2 pointing to same.
	// Which might not be what you want
	// So here we need to overload assignment operator
	// This is called deep copy

	test2 = test1;
	test2.print();

	Test test3;
	test3 = test2 = test1; // This is also valid

	// This doesn't use overloaded operator
	// You have to keep this in mind
	Test test4 = test1;
	test4.print();
	
	return 0;
}