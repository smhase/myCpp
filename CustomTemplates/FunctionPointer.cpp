#include<iostream>

using namespace std;

void test() {
    cout << "Hello!" << endl;

}

void kersty(int value) {
    cout << value << endl;
}

int main() {
    
    // This is a function pointer to function which returns void and takes no parameter
    void (*pTest)();

    void (*pKersty)(int);
    /*
    You need the additional bracket
    void *pTest();
    Means that pTest is a function with no parameters and void* return type.
    */

    // This will save the pointer to test into pTest pointer 
    pTest = &test;

    // This will also work, because test is actually the pointer only
    pTest = test;
    
    // To access the function we can use
    (*pTest)();

    // And this will also work
    pTest();

    return 0;
}