#include <iostream>

using namespace std;

template <class T>
auto test(T value) -> decltype(value) {
	return value;
}

int main() {

	// auto can be used to give the type
	// c++ will figure out the type itself
	auto value = 7;

	auto text = "Hello";

	cout << value << endl;

	cout << text << endl;

	cout << test("") << endl;

	return 0;
}