#include <iostream>
using namespace std;

/*
 * A function that takes a word stored in a character array
 * (an array of type char) as an argument and repeatedly
 * prints the word as many times as it has characters
 */

void printString(char string[]);

int main() {
    char myString[] = "This is My SHOW";
    printString(myString);

    return 0;
}

/*
 * printString - A function that accepts
 * a string (Array of char) and prints the string
 * depending on the length of the string.
 */
void printString(char string[]) {
    int sLen = 0;
    while (string[sLen] != '\0') {
        sLen++;
    }

    for (int i = 0; i < sLen; i++) {
        cout << string << endl;
    }
}
