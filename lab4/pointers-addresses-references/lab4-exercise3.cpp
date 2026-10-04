#include <iostream>
using namespace std;

int main() {
    int x;
    x = 25;
    int& reference = x;  //alias
    reference = 3;  //reference=x, means that we set new value to x, which is x=3

    cout << x << endl;
    cout << reference << endl;

    return 0;
}
