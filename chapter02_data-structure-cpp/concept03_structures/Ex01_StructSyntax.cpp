#include <iostream>
using namespace std;

/*
     C++ Structures
        (also called structs) are a way to group several related variables into one place.
        Each variable in the structure is known as a member of the structure.
        Unlike an array, a structure can contain many different data types: int, string, bool, etc.

     Create a Structure
        To create a structure, use the struct keyword and declare each of its members inside curly braces.
        After the declaration, specify the name of the structure variable (myStructure in the example below):
     */

// 1. Create a structure variable called myStructure
struct {             // Structure declaration
        int myNum;         // Member (int variable)
        string myString;   // Member (string variable)
    } myStructure1,myStructure2;       // Structure variable ; We can add multiple variables by separating them with a comma

/*
    2. Named Structures
        By giving a name to the structure, you can treat it as a data type.
        This means that we can create variables with this structure anywhere in the program at any time.
        To create a named structure, put the name of the structure right after the struct keyword
 */

int main () {
    // 1. usage of struct without named structure

    // Assign values to members of myStructure
    // Put data into the first structure
    myStructure1.myNum = 1;
    myStructure1.myString = "Ram";

    // Put data into the second structure
    myStructure2.myNum = 2;
    myStructure2.myString = "Dev";

    // Print members of myStructure
    cout << "Structure-1 : "<< endl;
    cout << myStructure1.myNum << endl;
    cout << myStructure1.myString << endl;

    // Print members of myStructure
    cout << "Structure-2 : "<< endl;
    cout << myStructure2.myNum << endl;
    cout << myStructure2.myString << endl;


    // 2. Named Structure:



    return 0;
}
