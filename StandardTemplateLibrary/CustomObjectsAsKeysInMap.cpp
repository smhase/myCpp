#include <iostream>

#include <map>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person() : name(""), age(0){}

	Person(const Person& other) {
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) : name(name), age(age) {}

	// print function should be const because we don't want it be able to change the values
	void print() const {
		cout << name << " : " << age << endl;
	}

	// This function is operator overloading for < operator
	// This overloading is necessary if you want to use this class as key in map
	// This function will be used by map to sort the objects
	// Map function has to sort the objects. That is it's basic property
	// First const is to tell that person should not change
	// Seconf const is to tell that function should not change value of class variable
	bool operator<(const Person &other) const {
		if (name == other.name) {
			return age < other.age;
		}
		else {
			return name < other.name;
		}
		
	}

};

int main() {
	map<Person, int> people;

	people[Person("Ashlesha", 34)] = 34;
	people[Person("Will", 31)] = 31;
	people[Person("Hannibal", 24)] = 24;
	
	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->second << " : " << flush;
		it->first.print();
	}
	return 0;
}