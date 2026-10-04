#include <iostream>
using namespace std;
void printSymbol(char);
char symbolA();

char symbolA() {
    char symbol = 'A';
    printSymbol('B');

    return symbol;
}

void printSymbol(char symbol) {
    cout << symbol;
}

int main() {
    char response = symbolA();
    cout << response << endl;
    printSymbol(response);

    return 0;
}
