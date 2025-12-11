#include <iostream>
using namespace std;

/*
* A function that returns the factorial of its integer
* argument stored in an array. The function
* uses a loop for the calculation.
*/

int factorial(int factorialNumber);

int main() {
    int myArray[] = {2, 3, 4, 5, 6, 7};
    int indexForFactorial = 6;

    while (indexForFactorial < 0 || indexForFactorial >= 6) {
        cout << "Enter the index for factorial 0 and 5: ";
        cin >> indexForFactorial;
    }


    int numberForFactorial = myArray[indexForFactorial];
    int factorialResults = factorial(numberForFactorial);

    cout << "Factorial of " << numberForFactorial << " is: "
            << factorialResults << endl;

    return 0;
}

int factorial(int factorialNumber) {
    int fResult = 1;
    for (int i = 1; i <= factorialNumber; i++) {
        fResult *= i;
    }
    return fResult;
}
