#include <iostream>

using namespace std;

int main() {
	int cats = 5;

	// We are passing cats to the lambda funtion
	// To be able to edit it inside the lambda function
	// You must add mutable for editin
	[cats]() mutable {
		cats = 8;
		cout << cats << endl;
	}();

	return 0;
}