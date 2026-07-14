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

    /*
    3. C++ For Loop
        When we know exactly how many times you want to loop through a block of code,
        use the for loop instead of a while loop:
     */
    cout << "------------------------------------------" << endl;
    cout << "|               3. For Loop              |" << endl;
    cout << "------------------------------------------" << endl;

    int number;
    cout << "Enter a number to print  0 to number : ";
    cin >> number;

    for (int i = 0; i <= number; i++) {
        cout << i << " " ;
    }
    /*
    Statement 1 sets a variable before the loop starts: int i = 0
    Statement 2 defines the condition for the loop to run: i <= number. If the condition is true,
                the loop will start over again, if it is false, the loop will end.
    Statement 3 increases a value each time the code block in the loop has been executed: i++
     */

    /*
    4. Nested Loops
        It is also possible to place a loop inside another loop. This is called a nested loop.
        The "inner loop" will be executed one time for each iteration of the "outer loop".
        Nested loops are useful when working with tables, matrices, or multi-dimensional data structures.
    */
    cout << "------------------------------------------" << endl;
    cout << "|           4. Nested For Loop           |" << endl;
    cout << "------------------------------------------" << endl;

    // Outer loop
    for (int i = 1; i <= 3; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 3 times

        // Inner loop
        for (int j = 1; j <= 2; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (3 * 2)
        }
    }

    /*
     5. The foreach Loop
        There is also a "for-each loop" (also known as ranged-based for loop), which is used to loop through elements in an array (or other data structures):
     */

    cout << "------------------------------------------" << endl;
    cout << "|             5. For each Loop           |" << endl;
    cout << "------------------------------------------" << endl;

    string word = "Welcome to Cpp!";
    for (char c : word) {
        cout << c << "\t";

        if (c == ' ') {
            cout << endl;
        }
    }

    return 0;
}
