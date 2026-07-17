#include <iostream>
using namespace std;

/*
    Pass By Value : using the parameter content/value
        we used normal variables when we passed parameters to a function.

    Pass By Reference: using the parameter variable address
        You can also pass a reference to the function.
        This can be useful when you need to change the value of the argument(s):
 */

void alterNumberUsingPassByValue(int num) {
    num = num * 2; // doubling passed value 'num'.
}

void alterNumberUsingPassByReference(int &num) {
    num = num * 2; // doubling passed value 'num'.
}

int main() {

    int num1 = 2;
    cout << "------Pass By Value------" << endl;
    cout << "Before doubling : " << num1 << endl;
    alterNumberUsingPassByValue(num1);
    cout << "After doubling : " << num1 << endl;

    int num2 = 2;
    cout << "\n------Pass By Reference------" << endl ;
    cout << "Before doubling : " << num2 << endl;
    alterNumberUsingPassByReference(num2);
    cout << "After doubling : " << num2 << endl;


    return 0;
}
