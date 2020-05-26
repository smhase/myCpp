#include <iostream>

// LIFO
#include <stack>
// FIFO
#include <queue>

using namespace std;

class Test {
private:
	string name;

public:
	Test(string name) :
		name(name) {
	}

	~Test() {
		// cout << "Object Destroyed" << endl;
	}

	void print() {
		cout << name << endl;
	}
};

int main() {
	//LIFO
	stack<Test> testStack;

	// Important thing unrelated to stack is
	// As you add the object in stack
	// You make a copy and the original object is destroyed.
	testStack.push(Test("Saurabh"));
	testStack.push(Test("Naresh"));
	testStack.push(Test("Alisha"));

	Test test1 = testStack.top();
	test1.print();
	testStack.pop();

	/*
	*
	* This is invalid code! Object is destroyed and then accessed
	* The code might work most of the time and the compiler will not flag an error
	* This is what makes this code so bad and this point so important. 
	* You will need to be hyper aware
	THIS CODE LOOKS VERY NATURAL BUT IT IS WRONG

	Test &test1 = testStack.top()
	testStack.pop()
	test1.print();
	
	What is happening here is the pointer to the stack top is saved
	and when it is deleted both the values are affects.
	Since its a pointer
	
	*/

	// How to iterate on that stack
	while (testStack.size() > 0) {
		Test &test = testStack.top();
		test.print(); // 1
		testStack.pop(); // 2
		// Here 1 and 2 cannot be interchanged
	}

	cout << endl;

	queue<Test> testQueue;
	//LIFO
	testQueue.push(Test("Saurabh"));
	testQueue.push(Test("Naresh"));
	testQueue.push(Test("Alisha"));

	cout << endl;

	while (testQueue.size() > 0) {
		Test& test = testQueue.front();
		test.print();
		testQueue.pop();
	}


	return 0;
}