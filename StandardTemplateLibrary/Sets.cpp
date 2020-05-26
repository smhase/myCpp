#include <iostream>

// Only stores unique elements
// Stores them in order
#include <set>

using namespace std;


class Test {
	int id;
	string name;

public:
	Test() : id(0), name("") {
	}

	Test(const Test &other) :name(other.name), id(other.id) {}

	Test(int id, string name) : id(id), name(name) {
	
	}

	// This must be const
	void print() const{
		cout << id << ": " << name << endl;
	}

	bool operator<(const Test &other) const {
		return name < other.name;
	}
};


int main() {

	// Set can also be of custom objects
	// But for those custom objects you will need to have < operator overloaded
	set<int> numbers;

	numbers.insert(50);
	numbers.insert(10);
	numbers.insert(20);
	numbers.insert(40);
	numbers.insert(40);

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	set<int>::iterator itFind = numbers.find(30);

	if (itFind != numbers.end()) {
		cout << "Found: " << *itFind << endl;
	}

	// Count is strangely named
	// count returns 1 if number is present
	// count returns 0 if number is not present
	if (numbers.count(30)) {
		cout << "Number found" << endl;
	}



	return 0;
}