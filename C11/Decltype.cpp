#include <iostream>
#include <typeinfo>

using namespace std;
int main() {
	string value;

	// decltype() can be used to create another variable 
	// as type same as previous one
	decltype(value) name = "Bob";

	cout << name << endl;


}
