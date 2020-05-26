#include <iostream>
// Difference between List and vector is that in list 
// you can add anywhere. But in vector you can add at end or beginning
#include <list>

using namespace std;

int main() {

	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(0);

	list<int>::iterator it = numbers.begin();
	it++;
	
	// It adds a number before the number to which iterator is pointing
	// The number to which the iterator is pointing to and everything after it shifts by one
	// And now the iterator points to new number
	numbers.insert(it, 100);

	// Erasing is tricky. Need to take care
	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;

	// You must get the returned Iterator
	// erase function deletes the item to which iterator is pointing
	// It then returns the pointer to the item next to it.
	// You will have to use the returned pointer, because the pointer used to
	// delete the item can be a dangling pointer
	eraseIt = numbers.erase(eraseIt);



	// You will have to use iterator you cannot use index
	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	// We cannot use += with list iterators.
	// We can only use ++ or --
	return 0;
}