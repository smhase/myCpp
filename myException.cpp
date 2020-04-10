#include <iostream>
#include <exception>

using namespace std;

class MyException: public exception {
public:
        virtual const char* what() const throw() {
            return "Something went wrong";
        }
};

class Test {
public:
        void goesWrong() throw(){
            throw MyException();
        }
};

int main(){

    Test test;

    try {
        test.goesWrong();
    }
    catch(MyException &e){
        cout << e.what() << endl;
    }
}