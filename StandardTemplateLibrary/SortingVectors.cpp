#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Test {
	int id;
	string name;

public:
	Test(int d, string name) : id(id), name(name) {}
	void print() {
		cout << id << " : " << name << endl;
	}

	// bool operator<(const Test& other) const {
	// 	return name < other.name;
	// }

	friend bool comp(const Test& a, const Test& b);
};

bool comp(const Test& a, const Test& b) {
	return a.name < b.name;
}
int main() {

	vector<Test> tests;

	tests.push_back(Test(5, "Saurabh"));
	tests.push_back(Test(15, "Alisha"));
	tests.push_back(Test(25, "Shubham"));
	tests.push_back(Test(35, "Hannibal"));
	tests.push_back(Test(45, "Lokesh"));
	tests.push_back(Test(55, "Rosamund"));

	// You can sort with this by have < operator overloading in Test
	// sort(tests.begin(), tests.end(), comp);

	// Or this by having comp function defined
	sort(tests.begin(), tests.end(), comp);

	for (int i = 0; i < tests.size(); i++) {
		tests[i].print();
	}
	return 0;
}