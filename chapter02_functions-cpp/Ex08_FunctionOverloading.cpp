#include <iostream>
using namespace std;

/*
    Without Function Overloading
    Consider the following example, which have two functions that add numbers of different type:
       Code:
        int plusFuncInt(int x, int y) {
          return x + y;
        }

        float plusFuncDouble(float x, float y) {
          return x + y;
        }

*/

// To overcome the above case :

/*
    Function Overloading
        Function overloading allows multiple functions to have the same name,
        as long as their parameters are different in type or number as written below adder() function.
 */

/*
    Using Function Overloading
        Instead of defining two functions that should do the same thing, it is better to overload one.
        In the example below, we overload the plusFunc function to work for both int and double:
 */
int adder(int a, int b) {
    return a + b;
}

float adder(float a, float b) {
    return a + b;
}

// Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.

int adder(int x, int y, int z) {
    return x + y + z;
}

// Main Method
int main() {
    cout << "Int adder : "<< adder(1, 2) << endl;
    cout << "Float adder : "<< adder(3.14f, 2.718f) << endl;
    cout << "Int adder of three numbers : "<< adder(3,6,7) << endl;
    return 0;
}
