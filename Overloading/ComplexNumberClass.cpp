#include <iostream>
#include "Complex.h"

using namespace std;
using namespace Overloading;

int main() {

	Complex c1(2,3);

	Complex c2 = c1;

	c1 = c2;
	return 0;
}