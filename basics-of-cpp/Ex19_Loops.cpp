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

    /*
    2. The Do/While Loop
        The do/while loop is a variant of the while loop.
        This loop will execute the code block once, before checking if the condition is true.
        Then it will repeat the loop as long as the condition is true.
        The example below uses a do/while loop. The loop will always be executed at least once,
        even if the condition is false, because the code block is executed before the condition is tested.
    */
    cout << "------------------------------------------" << endl;
    cout << "|            2. Do While Loop            |" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Start = "<< start << endl;
    do {
        cout << start << "" << endl;
        start--;
    }while (start > 0); // Note: The semicolon ; after the while condition is required!
    cout << "Happy New Year!" << endl;
    return 0;
}
