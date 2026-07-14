#include <iostream>
using namespace std;

/*
    C++ Loops
        Loops can execute a block of code as long as a specified condition is reached.
        Loops are handy because they save time, reduce errors, and they make code more readable.
 */
int main() {
    /*
     1. C++ While Loop
        The while loop loops through a block of code as long as a specified condition is true:
     */
    cout << "------------------------------------------" << endl;
    cout << "|              1. While Loop             |" << endl;
    cout << "------------------------------------------" << endl;

    int iterate;
    cout << "Enter number of times to iterate hello world string : ";
    cin >> iterate;

    int start = 1;

    while (start <= iterate) {
        cout << start <<". " << "Hello World!" << endl;
        start++;
    }

    return 0;
}
