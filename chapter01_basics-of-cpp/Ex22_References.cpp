#include <iostream>
using namespace std;

int main() {

    /*
     1. Creating References
        A reference variable is an alias for an existing variable.
        It is created using the & operator
    */
    cout << "------------------------------------------" << endl;
    cout << "|              1. References             |" << endl;
    cout << "------------------------------------------" << endl;

    string food = "Chicken Biryani";

    auto &meal = food; // auto keyword automatically detect type at compiler.
    /*
     * reassign address won't allowed in references, whereas in pointer it will reassign!
          string ten = "10";
          &meal = ten;
      */
    // Now, we can use either food or meal to refer to the same value.
    cout  << "food -> " << food << "\t |  meal (References variable) -> " << meal << endl;

    /*
       Note: Both food and meal refer to the same memory location. Changing one affects the other.
        If we change the value of a reference variable, the original variable will also change (and vice versa),
        because they both refer to the same memory location.
     */
    meal = "Sambar Rice";
    cout << "meal value altered -> " << meal << endl;

    cout << "Then food will be -> " << food << endl;

    cout << endl;
    /*
     2. Memory Address
        In the example from the previous food variable, the & operator was used to create a reference variable.
        But it can also be used to get the memory address of a variable;
        which is the location of where the variable is stored on the computer.
        When a variable is created in C++, a memory address is assigned to the variable.
        And when we assign a value to the variable, it is stored in this memory address.

        To access it, use the & operator, and the result will represent where the variable is stored:
     */

    // Note: The memory address is in hexadecimal form (0x..).
    //       And also that we may not get the same result in your program.

    cout << "------------------------------------------" << endl;
    cout << "|            2. Memory Address           |" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Address of food : " << &food << endl;
    cout << "Address of meal : " << &meal << endl;

    return 0;
}

/*
 * Why Reference variable not directly declared variable?
 
    In every day, simple code, we usually wouldn't do this.
    The real power and purpose of references come into play when we start dealing with functions and large amounts of data.
    Here is why references are actually one of the most important tools in C++:
        1. Modifying Variables Inside Functions (Pass-by-Reference)
            Normally, when we pass a variable into a function, C++ creates a complete copy of that variable. 
            If the function changes the value, it only changes the copy—our original variable stays exactly the same.
            If we want a function to be able to modify the original variable we passed it, we have to use a reference.
            Without a reference (Pass by Value): The function gets a copy. The original is safe but cannot be updated by the function.
            With a reference (Pass by Reference): The function gets an alias to the original variable. 
            Any changes made inside the function happen to the original variable.

        2. Saving Memory and Boosting Performance
            Imagine we have a variable that holds a massive amount of data, like a high-resolution image,
            a 3D video game character, or a list of 10,000 user profiles.
            If we pass that variable to a function normally, C++ has to copy all of that data into a new memory space. 
            This takes up a lot of extra RAM and slows our program down significantly.
            By passing the variable as a reference (&), we tell the program: "Don't copy this giant file. 
            Just use this alias to look at the one that already exists."
            This is incredibly fast and takes up almost zero extra memory.

        3. Making Complex Code Easier to Read
            Sometimes, variables are buried deep inside complex data structures.
            Imagine having to type something like this over and over to update a player's score in a game:
                server.playerList[5].stats.currentGame.score += 10;
            Instead of typing that massive chain every time, we can create a simple, direct reference to it:
                int &playerScore = server.playerList[5].stats.currentGame.score;
            Now, we can just type playerScore += 10; and it updates the original data directly, keeping our code clean and easy to read.
 */