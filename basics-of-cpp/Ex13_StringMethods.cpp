#include <iostream>
#include <string>

using namespace std;
int main () {

    string firstName, lastName;
    cout << "Enter your first name: "; cin >> firstName;
    /*
    When we entered Dev kel and pressed Enter:
        -> cin >> firstName; grabbed the first word ("Dev") and stopped at the space.
            It assigned "Dev" to the firstName variable.
        -> The remaining part of our input ("kel") was left waiting in the computer's internal input buffer.
        -> When the program moved to the next line (cin >> lastName;),
            it checked the buffer, found "kel" already waiting there, and immediately assigned it to lastName.
        -> Because it found what it needed in the buffer, it didn't need to pause and wait for we to type anything else,
            which is why it instantly printed our menu.
    To overcome the above case:
        The cin.ignore() function takes two arguments:
            the maximum number of characters to ignore, and the character it should stop at.
            When we write cin.ignore(10000, '\n');, we are giving C++ two specific instructions:

        -> 10000 (The Count): This tells the program to throw away up to 10,000 characters from the input buffer.
            We use a massive number like 10,000 just to be absolutely safe.
            If a user accidentally mashed their keyboard and typed "kel is a great guy blah blah blah", 10,000 ensures we delete all of it.
        -> '\n' (The Delimiter): This represents the "newline" character—which is the exact character created when we press the Enter key.
            This tells the program, "Stop ignoring things once we hit the end of the line."
        Incase we doubt over the number 10,000:
            The "Technically Perfect" Way
                While 10000 works perfectly fine for most basic programs,
                we will eventually see professional C++ code that looks like this:
                Code sample:
                    #include <limits> // Required at the top of our file
                    // Inside our main function:
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
            Instead of guessing a big number like 10,000,
            numeric_limits<streamsize>::max() automatically calculates the absolute maximum number of characters our specific computer's buffer can hold.
            It is the bulletproof version of 10000, but it does the exact same job!

     */
    cin.ignore(10000,'\n');

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

    /*
        However, cin considers a space (whitespace, tabs, etc) as a terminating character,
        which means that it can only store a single word (even if we type many words):
     */
    cout << "----------------------------------------------------" << endl;
    cout << "|   7. User Input Strings for multi-word statement |" << endl;
    cout << "----------------------------------------------------" << endl;

    // From the example above, we would expect the program to print "Dev Ke", but it only prints "Dev".
    string full_name;
    cout << "Type your full name: ";
    cin >> full_name;
    cin.ignore(10000,'\n');
    cout << " Without using getline() :Your full name is: " << full_name << endl;

    /*
        That's why, when working with strings, we often use the getline() function to read a line of text.
        It takes cin as the first parameter, and the string variable as second:
     */
    string get_full_name;
    cout << "Type your full name: ";
    getline (cin, get_full_name);
    cout << "Using getline() : Your full name is: " << get_full_name << endl;


    return 0;
}