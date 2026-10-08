#include <iostream>
#include <string>
using namespace std;

bool combinedLengthIsLessThanTen(string combined) {
    return combined.length() < 10;
}

int main() {
    string text;
    string text2;
    string combined;

    cin >> text;
    int i = 0;
    while (text[i] != '\0') {
        cout << text[i] << endl;
        i++;
    }
    cout << "Symbol count: " << text.length() << endl;

    //new word
    cout << "insert new word: " << endl;
    cin >> text2;
    combined = text+text2;
    if (combinedLengthIsLessThanTen(combined)) {
        cout << "Combined text: " << combined << endl;
        cout << "Combined length: " << combined.length() << endl;
    }

    return 0;
}
