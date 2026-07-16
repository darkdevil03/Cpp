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

    cout << endl ;

    /*
        string food2 = "ok";
        ptr = &food2;  // no locked-in allowed for ptr. whereas, for references locked-in allowed.
    */

    /*
     2. C++ Dereference : Get Memory Address and Value
            In the above example, we used the pointer variable to get the memory address of a variable (used together with the & reference operator).
            However, we can also use the pointer to get the value of the variable, by using the * operator (the dereference operator)

        Note: that the * sign can be confusing here, as it does two different things in our code:
            -> When used in declaration (string* ptr), it creates a pointer variable.
            -> When not used in declaration, it act as a dereference operator.


     */

    cout << "------------------------------------------" << endl;
    cout << "|             2. Dereference             |" << endl;
    cout << "------------------------------------------" << endl;

    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << "Pointer ptr -> " << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << "Dereference ptr = " << *ptr << "\n";

    *ptr = "sat";
    cout << "Dereference ptr = " << *ptr << "\n";
    cout << "food -> " << food << "\n";

    // cout << " food2 = " << food2 << "\n"; // if *ptr alter to food2 means check this.


    return 0;
}


/*
    In fact, in the original C programming language (the predecessor to C++), references did not exist.
    Programmers only had pointers, and they used them exactly the way we just demonstrated to change variables inside functions.

 * So, why did the creators of C++ go out of their way to invent references (&)
 * when pointers (*) already did the job ( when we can modify the content food via *ptr)?

    They introduced references to fix three major problems with pointers: Safety, Syntax, and Rules.

        1. References are Much Safer (No "Null" Crashes)
            Pointers are incredibly powerful, but they are also notoriously dangerous.
            A pointer is allowed to point to nothing (nullptr), or even worse, it can point to random, invalid memory.
            If we try to dereference a pointer that points to nothing (*ptr = "sat";),
            our entire program will instantly crash (this is called a Segmentation Fault).

            References fix this: A reference must be assigned to a real, existing variable the exact moment we create it,
            and it can never be "null." When we use a reference, the compiler guarantees that the data actually exists.

        2. Cleaner, Easier-to-Read Code
            Look at how many symbols we had to use to modify food with a pointer.
            we had to use & to get the address, and * to dereference it.
            When passing data into functions, this gets very messy, very fast.

            Look at the difference between using a pointer vs. a reference to change a variable inside a function:

            -> The Pointer Way (Cluttered):
                void changeFood(string* ptr) {
                    *ptr = "sat"; // Have to remember the *
                }

                // When calling the function:
                changeFood(&food); // Have to remember the &

            -> The Reference Way (Clean):
                void changeFood(string& alias) {
                    alias = "sat"; // Acts exactly like a normal variable! No * needed.
                }

                // When calling the function:
                changeFood(food); // Just pass the variable normally!
                References allow we to write complex code without littering our screen with * and & symbols.
                It looks and feels exactly like we are using the original variable.

        3. References are "Locked In" (Strict Rules)
            Pointers can change their mind: A pointer can point to food on line 22,
                                            and then we can tell it to point to drink on line 37.

            References are loyal forever: Once we say string &meal = food;, meal is locked to food for its entire existence.
                                          we cannot re-assign a reference to point to a different variable later.
                                          This strict rule prevents we from accidentally modifying the wrong data in complex programs.
 */