#include <iostream>
using namespace std;


void mightGoWrong() {

    bool int_error = false;
    bool char_star_error = true;
    bool str_error = true;

    if (int_error){
        throw 8;
    }

    if (char_star_error){
        throw "Error Message";
    }

    if (str_error) {
        throw string("Error Message");
    }
}

void usesMightGoWrong(){
    mightGoWrong();
}
int main() {

    try {
        usesMightGoWrong();
    }catch(int e){
        cout << "Error code : " << e << endl;
    }catch(char const * e){
        cout << "Error Message :" << e << endl;
    }catch(string &e){
        cout << "String error message : " << e << endl;
    }

    cout << "Still running" << endl;
    return 0;
}