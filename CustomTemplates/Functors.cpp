#include <iostream>

using namespace std;

// This kind of struct or class
// In which () operator is overloaded
// is called functors
struct Test {
	virtual bool operator()(string& text) = 0;
	virtual ~Test() {}
};

struct MatchTest : public Test {
	virtual bool operator()(string& text) {
		return text == "lion";
	}
};

void check(string text, Test& test) {
	if (test(text)) {
		cout << "Text Matches" << endl;
	}
	else {
		cout << "No Match" << endl;
	}
}


int main() {

	MatchTest pred;

	string value = "lion";

	// This looks like a function call
	// But it is not
	// Tricky thing to remember
	// Calls to functor objects can look like a function call but is an object call.
	cout << pred(value) << endl;

	MatchTest m;

	check("lion", m);
}
