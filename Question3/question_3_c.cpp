#include <iostream>
using namespace std;

/*
* A function that takes an array of integers as an
* argument and prints out the contents of the array
*/
void example(int list[]);
const int arraySize = 11;

int main() {
    int myArray[11] = {1, 2, 3, 4, 5,6,7,6,5,2,12};

    example(myArray);

    return 0;
}

/*
 * This function prints out the contents of list[]
 */
void example(int list[]) {
    /*This function prints out the contents of list[]*/
    for (int i = 0; i < arraySize; i++) {
        cout << list[i] << " ";
    }

    cout << endl;
}
