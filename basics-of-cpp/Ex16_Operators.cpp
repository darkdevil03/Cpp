#include <iostream>
using namespace std;
/*
	Order of Operations
		Here are some common operators in C++, from highest to lowest priority:

		() : Parentheses
		*, /, % : Multiplication, Division, Modulus
		+, - : Addition, Subtraction
		>, <, >=, <= : Comparison
		==, != : Equality
		&& : Logical AND
		|| : Logical OR
		= : Assignment
 */
int main() {

    cout << "------------------------------------------" << endl;
    cout << "|         1. Arithmetic Operator         |" << endl;
    cout << "------------------------------------------" << endl;

    int val_1 = 15;
    int val_2 = 3;

    // Addition : Adds together two values
    int addition = val_1 + val_2;

    // Subtraction : Subtracts one value from another
    int subtraction = val_1 - val_2;

    // Multiplication :	Multiplies two values
    int multiplication = val_1 * val_2;

    // Division : Divides one value by another
    int division = val_1 / val_2;

    // 	Modulus : Returns the division remainder
    int modulus = val_1 % val_2;

    cout << "Addition = " << addition << endl;

    cout << "Subtraction = " << subtraction << endl;

    cout << "Multiplication = " << multiplication << endl;

    cout << "Division = " << division << endl; // // Integer division, result is 5

    float a = 10.0;
    float b = 4.0;
    float decimal_division = a / b;
    cout << "Decimal division of "<<a<<" and " << b <<" : " << decimal_division << endl;

    cout << "Modulus = " << modulus << endl;

    // Increment : Increases the value of a variable by 1
    cout << "Pre-Increment : val_1 = "<< val_1 <<" increased by 1 using ++ then return in same line : " << ++val_1 << endl;
    cout << "Post-Increment : current val_1 return " << val_1++ << " and then increased by 1 using ++ : " << val_1 << endl;
    // Decrement : Decreases the value of a variable by 1
    cout << "Pre-Decrement : val_2 = "<< val_2 <<"  decreased by 1 using -- then return in same line : " << --val_2 << endl;
    cout << "Post-Decrement : current val_2 return " << val_2-- << " and then decreased by 1 using -- : " << val_2 << endl;

    cout << endl;

    /*
    2. Assignment Operators : used to assign values to variables.
     */
    cout << "------------------------------------------" << endl;
    cout << "|         2. Assignment Operator         |" << endl;
    cout << "------------------------------------------" << endl;

    // In the example below, we use the assignment operator (=) to assign the value 25 to a variable called x:
    int x = 25;
    cout << "x = " << x << endl;

    cout << "------------------------------------------" << endl;
    cout << "|  Addition compound assignment Operator |" << endl;
    cout << "------------------------------------------" << endl;

    // The addition compound assignment operator (such as +=, -= , etc...) adds a value to a variable:
    x += 3; // same as x = x + 3;
    cout << "x += 3 => "<< "{ x = " << x << " }" <<  endl;

    x -= 3; // same as	x = x - 3
    cout << "x -= 3 => "<< "{ x = " << x << " }" <<  endl;

	x *= 3; // same as	x = x * 3
	cout << "x *= 3 => "<< "{ x = " << x << " }" <<  endl;

	x /= 3; // same as	x = x / 3
	cout << "x /= 3 => "<< "{ x = " << x << " }" <<  endl;

	x %= 3; // same as	x = x % 3
	cout << "x %= 3 => "<< "{ x = " << x << " }" <<  endl;

	x &= 3; // same as	x = x & 3
	cout << "x &= 3 => "<< "{ x = " << x << " }" <<  endl;

	x |= 3; // same as	x = x | 3
	cout << "x |= 3 => "<< "{ x = " << x << " }" <<  endl;

	x ^= 8; // same as	x = x ^ 8
	cout << "x ^= 8 => "<< "{ x = " << x << " }" <<  endl;

	x >>= 1; // same as	x = x >> 1
	cout << "x >>= 1 => "<< "{ x = " << x << " }" <<  endl;

	x <<= 2; // same as	x = x << 2
	cout << "x <<= 2 => "<< "{ x = " << x << " }" <<  endl;

	/*
	3. Comparison Operators
		It used to compare two values (or variables).
		This is important in programming, because it helps us to find answers and make decisions.
		The return value of a comparison is either 1 or 0, which means true (1) or false (0).
		These values are known as Boolean values, and we will learn more about them in the Booleans and If..Else concept.
	 */

	cout << "------------------------------------------" << endl;
	cout << "|        3. Comparison Operators         |" << endl;
	cout << "------------------------------------------" << endl;

	cout << "--------- For Comparison Operator --------"<< endl;
	int operator_i , operator_j ;
	cout << "Enter the int value for operator_i : "; cin >> operator_i;
	cout << "Enter the int value for operator_j : "; cin >> operator_j;

	// Printing input operator values :
	cout << "operator_i = " << operator_i << "operator_j = " << operator_j << endl;
	// Equal to
	cout << "Checking operator_ i Equal to operator_j : " << (operator_i == operator_j) << endl;
	// 	Not equal
	cout << "Checking operator_ i Not Equal to operator_j : " << (operator_i != operator_j) << endl;
	// Greater than
	cout << "Checking operator_ i Greater than operator_j : " << (operator_i > operator_j) << endl;
	// Less than
	cout << "Checking operator_ i Less than operator_j : " << (operator_i < operator_j) << endl;
	// Greater than or equal to
	cout << "Checking operator_ i Greater than or Equal to operator_j : " << (operator_i >= operator_j) << endl;
	// Less than or equal to
	cout << "Checking operator_ i Less than or Equal to operator_j : " << (operator_i <= operator_j) << endl;


	/*
	4. Logical Operators
		As with comparison operators, we can also test for true (1) or false (0) values with logical operators.
		Logical operators are used to determine the logic between variables or values.
	 */
	cout << "------------------------------------------" << endl;
	cout << "|          4. Logical Operators          |" << endl;
	cout << "------------------------------------------" << endl;

	// int operator_i , operator_j ;
	cout << "--------- For Logical Operator --------"<< endl;
	cout << "Enter the int value for operator_i : "; cin >> operator_i;
	cout << "Enter the int value for operator_j : "; cin >> operator_j;

	// Printing input operator values :
	cout << "x = "<< x <<"; \t operator_i = " << operator_i << "; \t operator_j = " << operator_j << endl;

	// Logical and : Returns true if both statements are true
	cout << "Logical AND operation : " << "((" << x << " < " << operator_i << ") && (" << x << ">" << operator_j << ")) = "
		 << (x < operator_i && x > operator_j) << endl;

	// 	Logical or : Returns true if one of the statements is true
	cout << "Logical OR operation : " << "((" << x << " < " << operator_i << ") || (" << x << ">" << operator_j << ")) = "
		 << (x < operator_i || x > operator_j) << endl;

	// Logical not : Reverse the result, returns false if the result is true
	cout << "Logical NOT  : " << "!(" << x << " < " << operator_i << ") = "
		 << !(x < operator_i) << endl;



    return 0;
}