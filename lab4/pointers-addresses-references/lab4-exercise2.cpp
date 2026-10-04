#include <iostream>
using namespace std;

int main() {
    int* intPointer = new int;
    int x;
    x = 15;
    intPointer = &x;
    *intPointer = 44;

    cout << x << endl;
    cout << intPointer << endl;
    cout << *intPointer << endl;
    cout << &x << endl;

    delete intPointer;
    return 0;
}
