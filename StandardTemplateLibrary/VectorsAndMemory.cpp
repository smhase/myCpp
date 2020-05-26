#include <iostream>
#include <vector>

using namespace std;

int main() {

	// This will create a vector of size 20 and each element initialized to 1
	vector<double> numbers(20, 1);
	
	cout << "Size: " << numbers.size() << endl;

	// Vector manages array interally
	// When you add a new element in a vector what it will do internally is
	// Create a new array and copy all the elements from this array to the new new array along with new element

	// This will give the lenght of internal array used
	int capacity = numbers.capacity();

	// This will give size of vector
	int size = numbers.size();

	for (int i = 0; i < 10000; i++) {
		if (numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;

		}
		
		numbers.push_back(i);
	}

	// This will change the size to zero but capacity will remain as it is
	numbers.clear();

	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	// Will resize the vector
	numbers.resize(200);
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	// Reserve the size mentioned. Hence setting the capacity
	// It won't have any effect if value passed in reserve is less than current capacity
	numbers.reserve(3000);


	return 0;
}