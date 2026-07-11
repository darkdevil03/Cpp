#include <iostream>
#include <string>

using namespace std;
int main () {
    string firstName, lastName;
    cout << "Enter your first name: "; cin >> firstName;
    cout << "Enter your last name: "; cin >> lastName;

    /*
    1. String Concatenation
        The + operator can be used between strings to add them together to make a new string.

        In the example below concatenation, to create a space between first name and last name on output.
        However, we add a space with quotes (" " or ' '):
    */
    string fullNameConcate = firstName + " " +lastName;
    cout << "Full Name: "<<fullNameConcate << endl;

    /*
     2. Append
        A string in C++ is actually an object, which contain functions that can perform certain operations on strings.
        For example, we can also concatenate strings with the append() function:
     */
    string space = " ";
    string fullNameAppend = firstName.append(space.append(lastName));
    cout << "Full Name: " << fullNameAppend << endl;

    /*
     3. String Length
        To get the length of a string, use the length() function.
        We might see some C++ programs that use the size() function to get the length of a string.
        This is just an alias of length().
        It is completely up to our choice if we want to use length() or size():
     */
    // Space also count as char. So, consider it into length.
    cout << "Full Name Length: " << fullNameAppend.length() << endl;

    /*
     4. a) Access Strings
        We can access the characters in a string by referring to its index number inside square brackets [].
     */
    cout << "In first name, first char : " << firstName[0]  << endl;
    cout << "In last name, last char : " << lastName[lastName.length() - 1]  << endl;

    /*
    4. b) Change String Characters
        To change the value of a specific character in a string,
        refer to the index number, and use single quotes:
     */
    cout << "Before changes in first name, first char updated to :" << firstName << endl;
    firstName[0] = 'k';
    cout << "After changes in first name, first char updated to : " << firstName << endl;
    return 0;
}