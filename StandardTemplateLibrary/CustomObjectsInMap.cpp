#include <iostream>

#include <map>

using namespace std;

class Person {
private:
	string name;
	int age;
public:

	// This is necessary to be added if you add any other constructor
	Person() : name(""), age(0) {}

	// : name(name), age(age) stores the value of passed name,age to name,age variable 
	Person(string name, int age) : name(name), age(age) {}

	Person(const Person& other) {
		cout << "Copy constructor running" << endl;
		name = other.name;
		age = other.age;

	}
	void print() const {
		cout << name << ": " << age << endl;
	}
};

int main() {
	map<int, Person> people;

	people[10] = Person("Saurabh", 21);
	people[4] = Person("Lokesh", 23);
	people[6] = Person("Anirudh", 25);

	people.insert(make_pair(55, Person("keshav", 45));

	// Map sorts based on key by itself

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->first << " : " << flush;
		it->second.print();
	}

	return 0;
}

