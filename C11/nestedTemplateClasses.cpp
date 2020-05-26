#include <iostream>
#include "ring.h"

using namespace std;

int main() {

	ring::iterator it;
	it.print();

	ring<string> textstring(3);

	textstring.add("one");
	textstring.add("two");
	textstring.add("three");
	texstring.add("four");

	for (int i = 0; i < textstring.size(); i++) {
		cout << textstring.get(i) << endl;
	}

	return 0;
}