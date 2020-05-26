#include <iostream>
// Used for storing key value pair
#include <map>

using namespace std;

int main() {
	map<string, int> ages;

	ages["Alisha"] = 24;
	ages["Sanjana"] = 23;
	ages["Shweta"] = 24;
	ages["Disha"] = 22;
	ages["Bhagyashree"] = 24;
	ages["Ashlesha"] = 27;
	ages["Devyani"] = 12;
	ages["Rituja"] = 19;

	// This will overwrite older Alisha value
	ages["Alisha"] = 45;

	// Very new, funny and important phenonmenon
	// If you try to just access it. It will create it 
	// MUST KEEP IN MIND. This different than other languages

	cout << ages["Devika"] << endl;
	// So above line should not be used to access the element

	if (ages.find("Alisha") != ages.end()) {
		cout << "Alisha found" << endl;
	}
	else {
		cout << "Alisha not found" << endl;
	}

	// Iterating using iterator
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout <<"Name : " << it->first << endl << " Age : "<<it->second << endl;
	}

	// Saving value to pair and using it during iteration
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;
		cout << age.first << " : " << age.second << endl;
	}


	// Adding value using pair
	pair<string, int> addToMap("Peter", 100);
	ages.insert(addToMap);


	// Inserting using make_pair 
	ages.insert(make_pair("Snehal", 25))

	return 0;
}

