#include <iostream>
using namespace std;

/*
    Recursion
        Recursion is the technique of making a function call itself.
        This technique provides a way to break complicated problems down into simple problems which are easier to solve.
        Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.

*/


int sumOfNaturalNumbers(int n) {

    if (n == 0) {
        return 0;
    }
    /*
        When the sumOfNaturalNumbers() function is called,
        it adds parameter n to the function of all numbers smaller than k and returns the result.
        When n becomes 0, the function just returns 0. When running, the program follows these steps
    */
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int input = 3;
    int sum = sumOfNaturalNumbers(input);
    cout << "Sum of " << input << " natural numbers : " << sum << endl;
    return 0;
}