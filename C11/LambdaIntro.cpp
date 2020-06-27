#include <iostream>

using namespace std;

void test(void (*pFunc)()) {
	pFunc();
}

int main() {

	[]() { cout << "Hello" << endl;}();

	// You can split the above line into
	// auto var = []() { cout << "Hello" << endl; };
	// var();

	auto var = []() { cout << "Hello" << endl; };

	test(var);
	
	test([]() { cout << "Hello" << endl; });
	return 0;
}