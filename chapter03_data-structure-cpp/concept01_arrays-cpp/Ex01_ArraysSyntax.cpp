#include <iostream>
using namespace std;

int main() {
    /*
       Arrays: Fixed Size
        Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
        To declare an array, define the variable type,
        specify the name of the array followed by square brackets and specify the number of elements it should store
    Note: This is because the size of an array in C++ is fixed, meaning we cannot add or remove elements after it is created.
    */

    // We have now declared a variable that holds an array of four strings.
    // To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:
    string programming[4] = {"C", "C++","Java","Python"};

    // Loop through strings

    // Printing using for loop
    for (int i = 0; i < size(programming) ; i++) {
        cout << programming[i] << "\t";
    }

    // Printing using for-each loop
    // Note that, in C++ version 11 (2011) foreach loop, which is even cleaner and simpler:
        for (string s : programming) {
        cout << s << endl;
    }

    // We can also print with other loops also.
    // We know that when range known to print for loop is the best choice.

    return 0;
}
