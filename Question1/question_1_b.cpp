#include <iostream>
#include <algorithm>
using namespace std;
/*
* A function (getMode()) that accepts an array of
* numbers and returns the mode or an indication
* that the mode does not exist, and the
* corresponding program (main()) to test the function
*/
const int myArraySize = 10;

int getMode(int myArray[]);
int main() {
    int myNumbers[myArraySize];
    for (int i = 0; i< myArraySize; i++) {
        cout << "Enter Number for index " << i << " :" ;
        cin >> myNumbers[i];
    }
    int mode = getMode(myNumbers);
    if (mode == 0) {
        cout << "Mode Does not exist";
    }else {
        cout << "The Mode in myArray is : " <<mode<< endl;
    }
    return 0;
}


int getMode(int myArray[]) {

    sort(myArray, myArray + myArraySize);

    int currentNumber = myArray[0];
    int mode = currentNumber;
    int numberCount = 1;
    int numberCountMode = 1;
    bool hasDuplicates = false;

    for (int i = 1; i < myArraySize; i++) {
        if (myArray[i] == currentNumber) {
            numberCount++;
        } else {
            if (numberCount > numberCountMode) {
                numberCountMode = numberCount;
                mode = currentNumber;
                hasDuplicates = false;
            } else if (numberCount == numberCountMode) {
                hasDuplicates = true;
            }
            numberCount = 1;
            currentNumber = myArray[i];
        }
    }

    if (numberCount > numberCountMode) {
        mode = currentNumber;
        hasDuplicates = false;
    } else if (numberCount == numberCountMode) {
        hasDuplicates = true;
    }

    if (hasDuplicates || numberCountMode == 1) {
        return 0;
    }
        return  mode;
}
