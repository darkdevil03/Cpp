#include <iostream>
using namespace std;
int main () {
    // The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A' or 'c':
    char myGrade = 'A';
    cout << "Grade : "<< myGrade << endl;

    // Alternatively, if we are familiar with ASCII, we can use ASCII values to display certain characters:
    char asciiVal1 = 65; // Ascii of A
    char asciiVal2 = 66; // Ascii of B
    char asciiVal3 = 67; // Ascii of C

    cout << asciiVal1 << " = 100\t" << asciiVal2 << " = 90\t" << asciiVal3 << " = 80" ;

    return 0;
}
