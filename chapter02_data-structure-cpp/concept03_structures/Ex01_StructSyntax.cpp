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
// This structure is now named "car"
struct car {
    string brand;
    string model;
    int year;
};

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
    cout << "Without Name Structure : "<< endl;
    cout << "Structure-1 : " << "\t" << myStructure1.myNum << "\t" << myStructure1.myString << endl;
    cout << "Structure-2 : " << "\t" << myStructure2.myNum << "\t" << myStructure2.myString << endl;

    cout << endl;

    // 2. Named Structure:

    // To declare a variable that uses the structure,
    // use the name of the structure as the data type of the variable:
    car myCar1;
    myCar1.brand = "TATA";
    myCar1.model = "Maria";
    myCar1.year = 2019;

    car myCar2;
    myCar2.brand = "Audi";
    myCar2.model = "C2";
    myCar2.year = 2020;

    cout << "Named Structure : "<< endl;
    // Print the structure members
    cout << myCar1.brand << "\t" << myCar1.model << "\t" << myCar1.year << endl;
    cout << myCar2.brand << "\t" << myCar2.model << "\t" << myCar2.year << endl;

    return 0;
}
