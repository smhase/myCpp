#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

using namespace std;


namespace Overloading {

	class Complex {
	private:
		double real;
		double imaginary;

	public:
		Complex();
		Complex(double real, double imaginary);
		Complex(const Complex& other);
		const Complex& operator=(const Complex& other);
	};
}

#endif