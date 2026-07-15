#include <iostream>
using namespace std;

int main() {
    int day;
    cout << " Enter a number for between 1 - 7 for day to print : ";
    cin >> day;

    /*
    C++ Switch Statements
        Use the switch statement to select one of many code blocks to be executed.

    The below code shows that, how it works:
        The switch expression is evaluated once
        The value of the expression is compared with the values of each case.
        If there is a match, the associated block of code is executed
        The example below uses the weekday number to calculate the weekday name:

    The break Keyword
        When C++ reaches a break keyword, it breaks out of the switch block.
        This will stop the execution of more code and case testing inside the block.
        When a match is found, and the job is done, it's time for a break.
        There is no need for more testing.
    */

    switch(day) {

        /*
          A break can save a lot of execution time
          because it "ignores" the execution of all the rest of the code in the switch block.
        */
        case 1: cout << "Day-" << day << " : Monday"; break;
        case 2: cout << "Day-" << day << " : Tuesday"; break;
        case 3: cout << "Day-" << day << " : Wednesday"; break;
        case 4: cout << "Day-" << day << " : Thursday"; break;
        case 5: cout << "Day-" << day << " : Friday"; break;
        case 6: cout << "Day-" << day << " : Saturday"; break;
        case 7: cout << "Day-" << day << " : Sunday"; break;
        /*
           A break can save a lot of execution time because it "ignores" the execution of
           all the rest of the code in the switch block.
        */
        default: cout << "Invalid day number!!";
    }

    return 0;
}
