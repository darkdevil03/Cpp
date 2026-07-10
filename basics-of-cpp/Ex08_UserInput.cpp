/*
    Complete <iostream> Reference
    Tip: Both cin and cout belongs to the <iostream> library, which is short for standard input / output streams.
    For a complete reference of <iostream> objects along with detailed information, go to our C++ iostream Reference.
 */

#include <iostream>
using namespace std;

int main() {
    string name;

    // cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
    cout << "Enter your name : ";

    // cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).
    // cin is pronounced "see-in" and Used for input.
    cin >> name;

    cout << "Your name is " << name ;

    return 0;
}