#include <iostream>

using namespace std;

int main()
{  
    switch (__cplusplus) {
    case 199711 :
        cout << __cplusplus << " ( C++98 )" << endl;
        break;
    case 201103:
        cout << __cplusplus << " ( C++11 )" << endl;
        break;
    case 201402:
        cout << __cplusplus << " ( C++14 )" << endl;
        break;
    case 201703:
        cout << __cplusplus << " ( C++17 )" << endl;
        break;
    default:
        cout << __cplusplus << " ( Unrecognized Standard )" << endl;
        break;
    }
}