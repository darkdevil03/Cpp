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