#include <iostream>
using namespace std;

int main() {

    cout << "------------------------------------------" << endl;
    cout << "|         1. Arithmetic Operator         |" << endl;
    cout << "------------------------------------------" << endl;

    int val_1 = 15;
    int val_2 = 3;

    // Addition : Adds together two values
    int addition = val_1 + val_2;

    // Subtraction : Subtracts one value from another
    int subtraction = val_1 - val_2;

    // Multiplication :	Multiplies two values
    int multiplication = val_1 * val_2;

    // Division : Divides one value by another
    int division = val_1 / val_2;

    // 	Modulus : Returns the division remainder
    int modulus = val_1 % val_2;

    cout << "Addition = " << addition << endl;

    cout << "Subtraction = " << subtraction << endl;

    cout << "Multiplication = " << multiplication << endl;

    cout << "Division = " << division << endl; // // Integer division, result is 5

    float a = 10.0;
    float b = 4.0;
    float decimal_division = a / b;
    cout << "Decimal division of "<<a<<" and " << b <<" : " << decimal_division << endl;

    cout << "Modulus = " << modulus << endl;

    // Increment : Increases the value of a variable by 1
    cout << "Pre-Increment : val_1 = "<< val_1 <<" increased by 1 using ++ then return in same line : " << ++val_1 << endl;
    cout << "Post-Increment : current val_1 return " << val_1++ << " and then increased by 1 using ++ : " << val_1 << endl;
    // Decrement : Decreases the value of a variable by 1
    cout << "Pre-Decrement : val_2 = "<< val_2 <<"  decreased by 1 using -- then return in same line : " << --val_2 << endl;
    cout << "Post-Decrement : current val_2 return " << val_2-- << " and then decreased by 1 using -- : " << val_2 << endl;


    return 0;
}