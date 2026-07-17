#include <iostream>
using namespace std;

/*
    C++ Functions
        A function is a block of code which only runs when it is called.
        You can pass data, known as parameters, into a function.
        Functions are used to perform certain actions,
        and they are important for reusing code: Define the code once, and use it many times.

    Create a Function
        C++ provides some pre-defined functions, such as main(), which is used to execute code.
        But you can also create your own functions to perform certain actions.
        To create (often referred to as declare) a function,
        specify the name of the function, followed by parentheses () as written at line 20.
 */

// myFunction() is the name of the function
// void means that the function does not have a return value.
void firstFunction() {
    // inside the function (the body), add code that defines what the function should do
    cout << "My First function implementation!" << endl; // statements
}

void secondFunction();

int main() {
    /*
      Call a Function:
        Declared functions are not executed immediately.
        They are "saved for later use", and will be executed later, when they are called.
        To call a function, write the function's name followed by two parentheses () and a semicolon ;
        In the following example, myFunction() is used to print a text (the action), when it is called.
      */

    firstFunction();
    // A function can be called multiple times:
    firstFunction();


    return 0;
}

/*
    However, it is possible to separate the declaration and the definition of the function - for code optimization.
    We will often see C++ programs that have function declaration above main(), and function definition below main().
    This will make the code better organized and easier to read: as example secondFunction()
 */
void secondFunction() {
    cout << "My Second function implementation!" << endl;
}

/* Note: If a user-defined function, Such as myFunction() is declared after the main() function, an error will occur!
    Code : // Error
        int main() {
        myFunction();
        return 0;
        }

        void myFunction() {
        cout << "I just got executed!";
        }


// To overcome the above error:
    code:
    // Function declaration
    void myFunction();

    // The main method
    int main() {
      myFunction();  // call the function
      return 0;
    }

    // Function definition
    void myFunction() {
      cout << "I just got executed!";
    }
*/