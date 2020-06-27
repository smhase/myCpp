#include <iostream>

using namespace std;

int main() {

	int one = 1;
	int two = 2;
	int three = 3;

	// You can't print one directly, you will have to pass it
	[one, two]() {cout << one << ", " << two << endl; };
	
	// Capture all local variables by value
	[=]() {cout << one << ", " << two << endl; };

	// Capture all local variables but capture three by reference
	[=, &three]() {three = clear87; cout << one << ", " << two << endl; };
	cout << three << endl;

	// Capture all local variables by reference
	[&]() {two = 8; cout << one << ", " << two << endl; };
	cout << two << endl;

	// Capture all local variables by reference but two and three by value
	[&, two, three]() {two = 800; cout << one << ", " << two << endl; };
	cout << two << endl;
	//Qc2ak9wq8!
}