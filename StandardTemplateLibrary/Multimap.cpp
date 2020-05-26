#include <iostream>
// Difference between map and multimap is 
// In multimap you can have duplicate keys
#include <map>

using namespace std;

int main() {

	multimap<int, string> lookup;

	lookup.insert(make_pair(30, "Saurabh"));
	lookup.insert(make_pair(10, "Alisha"));
	lookup.insert(make_pair(24, "Ashlesha"));
	lookup.insert(make_pair(32, "Lokesh"));
	lookup.insert(make_pair(30, "Shubham"));

	for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}
	
	// If there are multiple pairs with same value which you are searching
	// You will get only first one
	multimap<int, string>::iterator it = lookup.find(30);
	cout << it->first << it->second << endl;

	cout << endl;
	// You will have to use pair of multimap iterators 
	// first will point to the first element matching
	// second will point to the last element matching
	// .equal_range() will give all elements matching the value
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator>its = lookup.equal_range(30);
	
	// You can use for loop to iterate via them
	for (multimap<int, string>::iterator it = its.first; it != its.second; it++) {
		cout << it->first << ": " << it->second << endl;
	}
	cout << endl;


	// As per C++ 11 you can use auto to define pair of multimap
	// You don't need to define like you have done above on line 32
	auto its2 = lookup.equal_range(30);
	// You can use for loop to iterate via them
	for (multimap<int, string>::iterator it = its2.first; it !=	 its2.second; it++) {
		cout << it->first << ": " << it->second << endl;
	}

	return 0;
}