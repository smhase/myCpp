#include <iostream>

using namespace std;

/* Templating can be done for functions as well*/

template<class T>
void print(T n) {
	cout <<"Template verion" << n << endl;
}

/* This is one more way of templating a function*/
template<typename T>
void printer(T n) {
	cout << n << endl
}

void print(int n) {
	cout << "Non template version" << endl;
}

template<class T>
void show() {
	cout << T() << endl;
}


int main() {

	print<string>("Hello!");
	printer<string>("Hello printer");

	print(3);
	print("Object interpreted by c++");

	print<>(10);
	 
	return 0;
}