#include <iostream>
using namespace std;

int main() {
    /*
    1. Creating Pointers
        A pointer however, is a variable that stores the memory address as its value.
        We can get the memory address of a variable by using the & operator.
        A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator.
        The address of the variable we're working with is assigned to the pointer.

    Tip: There are three ways to declare pointer variables, but the first way is preferred:
            string* mystring; // Preferred
            string *mystring;
            string * mystring;
    */
    cout << "------------------------------------------" << endl;
    cout << "|               1. Pointer               |" << endl;
    cout << "------------------------------------------" << endl;

    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << "food = " << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << "food -> " << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << "ptr -> " << ptr << "\n";



    return 0;
}