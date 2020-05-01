#include <iostream>
#include <fstream>

using namespace std;

void createUsingFStream() {
    fstream outFile;
    string outputFileName = "text.txt";
    outFile.open(outputFileName, ios :: out);

    if (outFile.is_open()) {
        outFile << "Hello there" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else {
        cout << "Could not create File : " << outputFileName << endl;
    }

}

void createUsingOfStream() {
    ofstream outFile;
    string outputFileName = "text.txt";
    outFile.open(outputFileName);

    if (outFile.is_open()) {
        outFile << "Hello there" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else {
        cout << "Could not create File : " << outputFileName << endl;
    }

}

int main(){

    createUsingOfStream();
    createUsingFStream();
    return 0;
}