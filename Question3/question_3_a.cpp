#include <iostream>
using namespace std;

/* A function that computes xn where x is a floating
 * point number and n is a positive integer.
 *
 * returns void
 */
double power(double x, int n);

/*
 * main function to test
 */
int main() {
    double x;
    int n = 0;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    while (n <= 0) {
        cin >> n;
        if (n <= 0) {
            cout << "n must be a positive integer" << endl;
        }
    }

    double answer = power(x, n);

    cout << x << " raised to power " << n << " is: " << answer << endl;

    return 0;
}

double power(double x, int n) {
    double result = 1;

    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}
