#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string inFileName = "text.txt";
	ifstream inFile;

	inFile.open(inFileName);

	if (inFile.is_open()) {
		string line;

		// while (inFile) will also work
		// they both are same. only inFile has operator overloaded
		while (!inFile. eof()) {
			getline(inFile, line);
			cout << line << endl;
		}

		inFile.close();
	}
	else {
		cout << "Cannot open file : " << inFileName << endl;
	}
}