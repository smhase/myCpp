#include <iostream>
// Vector from Standard Template Library
// Risizable Array of objects
#include <vector>

// Because vector comes in std
using namespace std;

int main() {

	// Creating a vector of strings
	vector <string> strings;

	// If you will only be using p
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");


	// You can predefine the size of vector by
	vector <string> string_second(5);

	// You can access with array index
	string_second[3] = "dog";

	string_second.push_back("cat");


	cout << string_second[3] << endl;
	cout << strings.size() << endl;
	cout << string_second.size() << endl;

	// Accessing elements in loop normally
	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << endl;
	}


	// Accessing elements in loop with iterator
	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
		cout << *it << endl;
	}

	// In the above loop you can edit the element
	// If you just want to read and not allow edit. You can use const iterator
}
