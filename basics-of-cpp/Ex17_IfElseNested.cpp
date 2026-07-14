#include <iostream>
using namespace std;

int main() {
    cout << " Enter two numbers to check max value : " << endl;
    int first_num, second_num;
    cin >> first_num ; cin >> second_num;

    /*
    1. The if Statement
        Use the if statement to specify a block of C++ code to be executed if a condition is true.
        Note that if is written in lowercase letters. Uppercase letters (If or IF) will generate an error.
    */
    cout << "------------------------------------------" << endl;
    cout << "|             1. If Statement            |" << endl;
    cout << "------------------------------------------" << endl;

    // condition
    if (first_num > second_num) {
        // block of code to be executed if the condition is true
        cout << first_num << " is greater than or equal to " << second_num << endl;
    }
    // Here, we again writing condition for false check checking for
    if (first_num < second_num) {
        cout << first_num << " is less than " << second_num << endl;
    }

    /*
    2. The else Statement
        Use the else statement to specify a block of code to be executed if the condition is false.
     */
    cout << "------------------------------------------" << endl;
    cout << "|            2. Else Statement           |" << endl;
    cout << "------------------------------------------" << endl;

    if (first_num > second_num) {
        // block of code to be executed if the condition is true
        cout << first_num << " is greater than " << second_num << endl;
    }else {
        // block of code to be executed if the condition is false
        cout << first_num << " is less than " << second_num << endl;
    }

    /*
    3. The else if Statement
        Use the else if statement to specify a new condition to test if the first condition is false.
        We can use else if to check multiple conditions, one after another.
        The conditions are checked from top to bottom.
        As soon as one condition is true, its block of code is executed, and the rest are skipped.
     */
    cout << "------------------------------------------" << endl;
    cout << "|          3. Else if Statement          |" << endl;
    cout << "------------------------------------------" << endl;
    if (first_num == second_num) {
        // block of code to be executed if condition1 is true
        cout << first_num << " is equal to " << second_num << endl;
    }else if (first_num > second_num) {
        // block of code to be executed if condition1 is false and condition2 is true
        cout << first_num << " is greater than " << second_num << endl;
    }else {
        // block of code to be executed if both conditions are false
        cout << first_num << " is less than " << second_num << endl;
    }

    /*
     4. Short Hand If...Else (Ternary Operator)
        There is also a short-hand if...else, known as the ternary operator because it uses three operands.
        The ternary operator returns a value based on a condition:
            if the condition is true, it returns the first value;
            otherwise, it returns the second value.
        It can be used to replace multiple lines of code with a single line,
        and is often used to replace simple if...else statements:
     */
    cout << "------------------------------------------" << endl;
    cout << "|           4. Ternary Operator          |" << endl;
    cout << "------------------------------------------" << endl;


    string isSinglePlaceDigit = (first_num <= 9)?" => Yes, Single placed digit" : " => Not a single placed digit!";
    cout << "first num = " << first_num << isSinglePlaceDigit << endl;

    string isAnyInputSingleDigit = (first_num <= 9)?" => Yes, First num is single placed digit" : ((second_num <= 9)?" => Yes, Second num is single placed digit" : " both inputs aren't single placed digit!");
    cout << isAnyInputSingleDigit << endl;

    return 0;
}