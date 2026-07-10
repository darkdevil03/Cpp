/*
    Variables are containers for storing data values.
    In C++, there are different types of variables (defined with different keywords), for example:

        int - stores integers (whole numbers), without decimals, such as 123 or -123
        double - stores floating point numbers, with decimals, such as 19.99 or -19.99
        char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
        string - stores text, such as "Hello World". String values are surrounded by double quotes
        bool - stores values with two states: true or false
 */

#include <iostream>
using namespace std;
int main() {
    int myNum = 5;               // Integer (whole number without decimals)
    cout << " int : " << myNum << "\n";
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    cout << " double : " << myFloatNum << "\n";
    char myLetter = 'D';         // Character
    cout << " char : " << myLetter<< "\n";
    string myText = "Hello";     // String (text)
    cout << " String : " << myText << "\n";
    bool myBoolean = true;       // Boolean (true or false)
    cout << " bool : " << myBoolean << endl;

    return 0;
}
