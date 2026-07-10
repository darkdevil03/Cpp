#include <iostream>
using namespace std;
int main () {
    int myNum = 1000;
    cout << myNum << endl;

    /*
    float vs. double
        The precision of a floating point value indicates how many digits the value can have after the decimal point.
        The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits.
        Therefore, it is safer to use double for most calculations.
     */
    float myFloat = 3.14f;
    cout << myFloat << endl;

    double myDouble = 3.1415239;
    cout << myDouble << endl;

    /*
        Scientific Numbers
        A floating point number can also be a scientific number with an "e" to indicate the power of 10:
     */
    float scientificFloat = 32e3;
    cout << scientificFloat << endl;

    double scientificDouble = 2.3E5;
    cout << scientificDouble << endl;

    return 0;
}