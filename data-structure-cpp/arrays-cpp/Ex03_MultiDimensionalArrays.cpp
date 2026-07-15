#include <iostream>
using namespace std;

int main() {

    /*
        Multi-Dimensional Arrays
            A multi-dimensional array is an array of arrays.
            To declare a multi-dimensional array, define the variable type,
            specify the name of the array followed by square brackets which specify how many elements the main array has,
            followed by another set of square brackets which indicates how many elements the sub-arrays have.
    */

    string first_last_name[3][2] = { // Two Dimensional Array
        {"Ram","Dev"},
        { "Jay", "Kan"},
        {"Perthame", "Parth"}
    };
    cout << "Given Array: first_last_name[3][2] " << endl;
    cout << "Number of rows : "<< size(first_last_name) << endl;
    cout << "Number of columns in 0th row : "<< size(first_last_name[0]) << endl;
    cout << "Number of columns in 1th row : "<< size(first_last_name[1]) << endl;
    cout << "Number of columns in 2th row : "<< size(first_last_name[2]) << endl;

    cout << "\nPrinting the two-dimensional array values : " << endl;
    for(int i = 0; i < size(first_last_name) ; i++) {
        for(int j = 0; j < size(first_last_name[i]) ; j++) {
            cout << first_last_name[i][j] << "\t";
        }
        cout << endl;
    }


    // The below example shows how to loop through a three-dimensional array:
    string letters[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
        { "E", "F" },
        { "G", "H" }
        }
    };

    cout << "\nPrinting the three Dimensional array values : " << endl;
    for (int i = 0; i < size(letters); i++) {
        for (int j = 0; j < size(letters[i]); j++) {
            for (int k = 0; k < size(letters[j]); k++) {
                cout << letters[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}