#include <iostream>
#include <algorithm>
using namespace std;

/*
 * CPP Version 23
 * A C++ function that accepts an array of numbers
 * and returns the median of the numbers in the
 * array, and the corresponding program (main) to
 * test the function (getMedian)
 *
 * Used: https://www.geeksforgeeks.org/cpp/sort-c-stl/
 * to learn how sorting in CPP works
 */
double getMedian(int myArr[], int myArrSize);

int main() {
    int numbersLen;
    cout << "Enter Size: ";
    cin >> numbersLen;
    int numbers[numbersLen];
    for (int i = 0; i < numbersLen; i++) {
        cout << "Enter number at index " << i <<": ";
        cin >> numbers[i];
    }
    double median = getMedian(numbers, numbersLen);
    cout << "Median : " << median << endl;
    return 0;
}

double getMedian(int myArr[], int myArrSize) {
    sort(myArr, myArr + myArrSize);
    if (myArrSize % 2 != 0 ) {
        int medianIndex =myArrSize / 2;
        return myArr[medianIndex];
    }
    int m1Index = (myArrSize / 2) - 1;
    int m2Index = myArrSize / 2;
    double m1m2Total =(myArr[m1Index] + myArr[m2Index]);
    double median = m1m2Total/2;
    return median;
}
