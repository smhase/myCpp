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

	friend ostream& operator<<(ostream& out, const Test& test) {
		out << test.id << " : " << test.name;
	}
};

int main() {

	Test test1(10, "Mike");
	
	cout << test1 << endl;

	return 0;
}