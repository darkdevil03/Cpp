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
    cout << "------------------------------------------" << endl;
    cout << "|        1. String Concatenation         |" << endl;
    cout << "------------------------------------------" << endl;

    string fullNameConcate = firstName + " " +lastName;
    cout << "Full Name: "<<fullNameConcate << endl;

    /*
     2. Append
        A string in C++ is actually an object, which contain functions that can perform certain operations on strings.
        For example, we can also concatenate strings with the append() function:
     */
    cout << "------------------------------------------" << endl;
    cout << "|               2. Append                |" << endl;
    cout << "------------------------------------------" << endl;

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
    cout << "------------------------------------------" << endl;
    cout << "|           3. String Length             |" << endl;
    cout << "------------------------------------------" << endl;

    // Space also count as char. So, consider it into length.
    cout << "Full Name Length: " << fullNameAppend.length() << endl;

    /*
     4. a) Access Strings
        We can access the characters in a string by referring to its index number inside square brackets [].
     */
    cout << "------------------------------------------" << endl;
    cout << "|          4. a) Access Strings          |" << endl;
    cout << "------------------------------------------" << endl;

    cout << "In first name, first char : " << firstName[0]  << endl;
    cout << "In last name, last char : " << lastName[lastName.length() - 1]  << endl;

    /*
    4. b) Change String Characters
        To change the value of a specific character in a string,
        refer to the index number, and use single quotes:
     */
    cout << "------------------------------------------" << endl;
    cout << "|     4. b) Change String Characters     |" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Before changes in first name, first char updated to :" << firstName << endl;
    firstName[0] = 'k';
    cout << "After changes in first name, first char updated to : " << firstName << endl;

    /*
    5. The at() function
        The <string> library also has an at() function that can be used to access characters in a string:
     */
    cout << "------------------------------------------" << endl;
    cout << "|          5. The at() function          |" << endl;
    cout << "------------------------------------------" << endl;

    cout << "First character : " << firstName.at(0) << endl;  //
    cout << "Second character : " << firstName.at(1) << endl;
    cout << "Last character : " << firstName.at(firstName.length() - 1) << endl;

    firstName.at(0) = 'J';
    cout << "After changes in first name using at function, first char updated to :" << firstName << endl;

    /*
     6. Special Characters
        Because strings must be written within quotes, C++ will misunderstand this string, and generate an error:
            string txt = "We are the so-called 'Druid' from the dat.";
        The solution to avoid this problem, is to use the backslash escape character.
        The backslash (\) escape character turns special characters into string character. As follows below :
    */
    cout << "------------------------------------------" << endl;
    cout << "|         6. Special Characters          |" << endl;
    cout << "------------------------------------------" << endl;

    // The sequence \'  inserts a single quote in a string:
    string single_quote_txt = "We are the so-called \'Druid\' from the dat.";
    cout << "For single quote in statement : " << single_quote_txt << endl;

    // The sequence \"  inserts a double quote in a string:
    string double_quote_txt = "We are the so-called \"Para\" from the tad.";
    cout << "For double quote in statement :  " << double_quote_txt << endl;

    // The sequence \\  inserts a single backslash in a string:
    string  backslash_txt = "Hello World, This dev\\.root " ;
    cout<< "For Back slash in statement : "<< backslash_txt <<endl;

    // The sequence R"(statement include multiple special character, Just write normal as below example.")
    string multi_special_character_one_string = R"(They are the so-called 'Druid' and "Para" from world of dat and tad.)";
    cout << "For multiple special character one string : " << multi_special_character_one_string << endl;




    return 0;
}