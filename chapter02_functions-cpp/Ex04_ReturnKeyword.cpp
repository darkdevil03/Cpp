#include <iostream>
using namespace std;

/*
    Return Values
        The void keyword, used in the previous examples, indicates that the function should not return a value.
        If we want the function to return a value, we can use a data type (such as int, string, etc.) instead of void,
        and use the return keyword inside the function.
 */
int add(int a, int b) {
    return a + b;
}

int main () {

    cout << "Adding of 1 and 2 number is : " << add(1, 2) << endl;

    return 0;
}