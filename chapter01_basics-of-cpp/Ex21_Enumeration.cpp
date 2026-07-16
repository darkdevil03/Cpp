#include <iostream>
using namespace std;

/*
    Enums
        An enum is a special type that represents a group of constants (unchangeable values).
        To create an enum, use the enum keyword, followed by the name of the enum,
        and separate the enum items with a comma.

    Why And When To Use Enums?
        Enums are used to give names to constants, which makes the code easier to read and maintain.
        Use enums when we have values that you know aren't going to change,
        like month days, days, colors, deck of cards, etc.
 */

/*
    1. By default,
        the first item (LOW) has the value 0, the second (MEDIUM) has the value 1, etc.
        If you now try to print level, it will output 1, which represents MEDIUM:
 */
enum Levels {
    LOW,
    MEDIUM,
    HIGH,
    ULTRA
};

/*
    2. Change Values
        As you know, the first item of an enum has the value 0.
        The second has the value 1, and so on.
        To make more sense of the values, we can easily change them:
 */
enum SpeedMode {
    ECO = 40,
    POWER = 70,
    SPORT = 100
};

/*
    Note that if we assign a value to one specific item,
    the next items will update their numbers accordingly.
 */
enum Decimal {
    ONE = 1,
    TWO ,
    THREE
};

int main() {
    /*
        Now that you have created an enum variable (myVar), we can assign a value to it.
        The assigned value must be one of the items inside the enum (LOW, MEDIUM, HIGH, or ULTRA):
     */

    cout << "Enum change default values by complier : " << endl;
    // Create an enum variable and assign a value to it
    Levels level1 = LOW;
    Levels level2 = MEDIUM;
    Levels level3 = HIGH;
    Levels level4 = ULTRA;

    // Print the enum variable
    cout << "Level : " << level1 << endl;
    cout << "Level : " << level2 << endl;
    cout << "Level : " << level3 << endl;
    cout << "Level : " << level4 << endl;

    cout << endl ;

    cout << "Enum change values custom by programmer : " << endl;

    SpeedMode speed1 = ECO;
    SpeedMode speed2 = POWER;
    SpeedMode speed3 = SPORT;

    cout << "SpeedMode : " << speed1 << endl;
    cout << "SpeedMode : " << speed2 << endl;
    cout << "SpeedMode : " << speed3 << endl;

    cout << endl ;

    cout << "Enum first value set by programmer and remaining not set : " << endl;

    Decimal decimal1 = ONE;
    Decimal decimal2 = TWO;
    Decimal decimal3 = THREE;

    cout << "Decimal-1 : " << decimal1 << endl;
    cout << "Decimal-2 : " << decimal2 << endl;
    cout << "Decimal-3 : " << decimal3 << endl;

    return 0;
}
