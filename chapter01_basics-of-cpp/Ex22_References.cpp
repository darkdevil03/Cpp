#include <iostream>
using namespace std;
    /*
       Creating References
        A reference variable is an alias for an existing variable.
        It is created using the & operator
     */
int main() {

    string food = "Chicken Biryani";
    auto &meal = food; // auto keyword automatically detect type at compiler.

    // Now, we can use either food or meal to refer to the same value.
    cout << "meal -> " << meal << "\t food -> " << food << endl;

    /*
       Note: Both food and meal refer to the same memory location. Changing one affects the other.
        If we change the value of a reference variable, the original variable will also change (and vice versa),
        because they both refer to the same memory location.
     */
    meal = "Sambar Rice";
    cout << "Meal value altered -> " << meal << endl;

    cout << "Then food -> " << food << endl;

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