#include <iostream>

using namespace std;

class Test {
private:
	int one{ 1 };
	int two{ 2 };

public:
	void run() {
		int three{ 3 };
		int four{ 4 };

		// Because we are passing this we are able to access the elements in private block
		// or else we will not be able to access the private elements. Strange really.
		auto pLambda = [this, three, four]() {
			cout << one << endl;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};
		pLambda();

		auto pLambda2 = [&, this]() {
			cout << one << endl;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};
		pLambda2();
	}
};

int main() {
	Test test;
	test.run();

	return 0;
}