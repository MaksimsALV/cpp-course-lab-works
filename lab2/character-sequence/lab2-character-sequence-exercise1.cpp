#include <iostream>
using namespace std;

bool lowerCase(char symbol) {
    return symbol>='a' && symbol<='z';
}

int main() {
    int i = 0;
    char textArray[5];
    cin >> textArray;
    cout << textArray << endl;

    while (textArray[i] != '\0') {
        if (lowerCase(textArray[i])) {
            cout << textArray[i] << endl;
        }
        i++;
    }
    cout << "Symbols: " << i << endl;


    return 0;
}
