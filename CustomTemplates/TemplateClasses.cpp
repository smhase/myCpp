#include <iostream>
using namespace std;

/*
* So templates finally
* Template keyword is written before a class
* It is used to allow user to specify the type of object when making it
* Like here for eg.
* On like 27 user made an object stating <string,int>
* So this means class T will be for string and class K will be for int
* So now any object made in class Test with T prefix will be of type string
*/
template<class T, class K>
class Test {
private:
	T obj;

public:
	Test(T obj){
		this -> obj = obj;
	}

	void print(){
		cout << obj << endl;
	}
};

int main(){
	Test<string, int> test1("Hello");
	test1.print();

	return 0;

}