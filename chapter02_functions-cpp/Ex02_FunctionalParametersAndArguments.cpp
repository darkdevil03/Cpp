#include <iostream>
using namespace std;

/*
    C++ Function Parameters and Arguments:
        Information can be passed to functions as a parameter.
        Parameters act as variables inside the function.
        Parameters are specified after the function name, inside the parentheses.
        We can add as many parameters as we want, just separate them with a comma:
 */

void parametersAndArguments(string input) { // string input: parameter
    cout << "My functional parameter : " << input << endl;
}

int main () {
    parametersAndArguments("Dev"); // "Dev" : is Argument
    parametersAndArguments("Ram");

    /*
    When a parameter is passed to the function, it is called an argument.
    So, from the above: input is a parameter, while "Dev" and "Ram" are arguments.
     */

    return 0;
}