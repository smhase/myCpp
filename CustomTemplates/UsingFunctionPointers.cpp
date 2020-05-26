#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool match(string test) {
	return test.size() == 3;
}

int countString(vector<string>& texts, bool (*match)(string test)) {
	for (int i = 0; i < texts.size(); i++) {
		if (match(texts[i])) {
			tally++;
		}
	}
}

int main() {
	vector<string> texts;

	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("four");
	texts.push_back("five");
	texts.push_back("three");
	texts.push_back("one");

	cout << match("one") << endl;

	cout << count_if(texts.begin(), texts.end(), match) << endl;

	cout << countString(texts, match);
	return 0;

}