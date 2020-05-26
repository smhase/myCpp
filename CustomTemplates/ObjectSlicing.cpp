#include <iostream>

using namespace std;

class Parent {
public:

	// Writing this constructor is important if you
	// Write the other constructor
	Parent(){
	}

	Parent(const Parent& other) {
		cout << "copy parent" << endll
	}
	
	virtual void print() {
		cout << "print parent" << endl;
	}

	void echo() {
		cout << "echo parent" << endl;
	}

	virtual ~Parent() {
	}
};

class Child : public Parent {
public:
	void print() {
		cout << "print Child" << endl;
	}

	void echo() {
		cout << "echo Child" << endl;
	}
};
int main() {
	Child c1;
	Parent& p1 = c1;

	p1.print();
	p1.echo();

	Parent p2 = Child();
	p2.print();

	return 0;
}