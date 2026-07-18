#include <iostream>
using namespace std;

/*
    Global Scope
        A variable created outside of a function, is called a global variable
        and belongs to the global scope.
        Global variables are available from within any scope, global and local.
 */
int global_variable = 20;

// A variable created outside of a function is global and can therefore be used by anyone.

void variableScope() {
    int func_variable = 10;
    cout << "Local variable (func_variable) that belongs to variableScope()  : " << func_variable <<  endl;
    cout << "The variableScope() accessing the global variable = " << global_variable << endl;
}

/*
    Naming Variables
        If you operate with the same variable name inside and outside of a function,
        C++ will treat them as two separate variables;
        One available in the global scope (outside the function) and
        one available in the local scope (inside the function).
 */

int sameNameVariable = 100;

void sameNameVariableScope() {
    // Local variable with the same name as the global variable (sameNameVariable)
    int sameNameVariable = 200;
    // Refers to the local variable sameNameVariable
    cout << "From sameNameVariableScope(), sameNameVariable = "<< sameNameVariable << endl;
}


int main() {
    cout << "\n-------Not Same Naming Variable------" << endl ;
    // function call
    variableScope();

    // func_variable doesn't have scope  and unrecognized by main function.
    // cout << func_variable << endl; // uncommet to check!

    // global variable scope
    cout << "Main function accessing the global variable = " << global_variable << endl;

    // Same Naming Variable for function local variable and global variable.
    cout << "\n-------Same Naming Variable------" << endl ;

    sameNameVariableScope();

    // Refers to the global variable sameNameVariable
    cout << "Main function accessing the global variable sameNameVariable = " << sameNameVariable << endl;

    /*
        However, you should avoid using the same variable name for both globally and locally variables as it can lead to errors and confusion.
        In general, you should be careful with global variables, since they can be accessed and modified from any function.
     */

    cout << "\n-------Some operation on same naming variable-------" << endl ;
    cout << "We done sameNameVariable + 1, Changes : " << endl;
    sameNameVariable++;

    sameNameVariableScope();
    cout << "Main function accessing the sameNameVariable (global variable) = " << sameNameVariable << endl;

    return 0;
}
