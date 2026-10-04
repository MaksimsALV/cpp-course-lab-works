#include <iostream>
using namespace std;

char symbols(char a, char &b) {
    b = 'C';
    return a;
}

int main() {
    char a = 'A';
    char b = 'B';
    char response = symbols(a, b);

    cout << response << endl;
    cout << b << endl;

    return 0;
}
