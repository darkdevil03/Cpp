#include <iostream>
using namespace std;

int main() {

    /*
     1. Break
        We have already seen the break statement used in an earlier switch concept implemention.
        It was used to "jump out" of a switch statement.
        The break statement can also be used to jump out of a loop.
        In below example, jumps out of the loop when i is equal to 4:
     */
    cout << "------------------------------------------" << endl;
    cout << "|                1. Break                |" << endl;
    cout << "------------------------------------------" << endl;

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            cout << "break at 4 before 'i' reach to 10" << endl;
            break;
        }
        cout << i << " ->\t";
    }

    /*
     2. Continue
        The continue statement breaks one iteration (in the loop),
        if a specified condition occurs, and continues with the next iteration in the loop.
        This example skips the value of 4:
     */
    cout << "------------------------------------------" << endl;
    cout << "|               2. Continue              |" << endl;
    cout << "------------------------------------------" << endl;

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            cout << "skipped\t" << "\t";
            continue;
            // when the condition satisfied and reaches continue,
            // then below code lines won't execute it will skip and move to next iteration.
            cout<< i << " ->\t"; // unreachable
        }
        cout << i << "\t";
    }



    return 0;
}