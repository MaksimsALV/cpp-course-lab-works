#include <iostream>
using namespace std;
//pointer points into memory address
//reference is alias, another name for variable

int main() {
    int* array = new int[5];
    for (int step = 0; step < 6; step = step + 1) {  //last input (6th) will be other allocation that is not related to my defined 5 int array. it still works, but preferable to keep the same size in all places, ie - if array[5], then input should be 5 too.
        cin >> array[step];
    }

    for(int step = 0; step < 6; step = step + 1) {
        cout << array[step] << endl;
    }

    delete array;
    return 0;
}
