#include <iostream>
using namespace std;

int main() {
    int * intPointer;
    char * charPointer;
    double * doublePointer;
    bool * boolPointer;

    intPointer = (int *)5;
    charPointer = (char *)5644;
    doublePointer = (double *)0x267e8;
    boolPointer = (bool *)0x267e8;

    cout << intPointer << endl;
    cout << (int *)charPointer << endl;
    cout << doublePointer << endl;
    cout << boolPointer << endl;
    return 0;
}
