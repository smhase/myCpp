#include <iostream>

using namespace std;

// This struct will be saved in 64 bytes. Because 2 Bytes will be added
// by the compiler to increase efficiency
struct Person1 {
	char name[50];
	int age;
	double weight;
};

// This line will tell to not add padding.
#pragma pack(push, 1)

// This struct will be saved in 62 Bytes. Since we have set
struct Person2 {
	char name[50];
	int age;
	double weight;
};

// This will reset all the parma stuff
#pragma pack(pop)

// This will be treated as Person1
struct Person3 {
	char name[50];
	int age;
	double weight;
};

int main() {
	cout << sizeof(Person1) << endl;
	cout << sizeof(Person2) << endl;
	cout << sizeof(Person3) << endl;
}