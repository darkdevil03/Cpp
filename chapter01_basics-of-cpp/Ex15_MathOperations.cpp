#include <iostream>
#include<cmath>
using namespace std;

/*
    C++ Math:
        C++ has many functions that allows you to perform mathematical tasks on numbers.
        For more : https://www.w3schools.com/cpp/cpp_ref_math.asp
 */

int main () {
    /*
    1. Max and min
        The max(x,y) function can be used to find the highest value of x and y:
     */
    cout << "Max of 5 and 10 is : " << max(5, 10) << endl;

    /*
        And the min(x,y) function can be used to find the lowest value of x and y:
     */
    cout << "Min of 5 and 10 is : " << min(5, 10) << endl;

    /*
    C++ <cmath> Library
        Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm),
        can be found in the <cmath> header file
     */
    cout << "Sqrt of 64 : " <<sqrt(64) << endl;
    cout << "Round off 2.6 :" << round(2.6) << endl;
    cout << "Log of 2 : " << log(2) << endl;
    return 0;
}
