
#include <iostream>
using namespace std;

int main() {
    /*
      Omit Array Size
        In C++, we don't have to specify the size of the array.
        The compiler is smart enough to determine the size of the array based on the number of inserted values.
    */
    string programming[] = {"C", "C++","Java","Python"};

    /*
      The example above is equal to:
        string programming[4] = {"C", "C++","Java","Python"};  Also four array elements
        However, the above commented approach is considered as "good practice",
        because it will reduce the chance of errors in our program.
    */

    // Get the size an array
    cout << "Size of programming array: " << sizeof(programming) << endl;

    /*
    Why did the result show 16 instead of 4, when the array contains 4 elements?
        It is because the sizeof() operator returns the size of a type in bytes.
        We learned from the Data Types chapter that an int type is usually 4 bytes,
        so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
        To find out how many elements an array has, we have to divide the size of the array by the size of the first element in the array.
     */
    int getArrayLength = sizeof(programming) / sizeof(programming[0]);
    cout << "Array length using sizeof() method : "<< getArrayLength << endl;

    // another way for length/ size of array :
    cout << "Array length using size() method : " << size(programming) << endl;




    return 0;
}