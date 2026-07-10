#include <iostream>
using namespace std;
int main () {
    cout << "Boolean DataType" << endl;

    /*
        A boolean data type is declared with the bool keyword and can only take the values true or false.
        When the value is returned, true = 1 and false = 0.
     */
    bool isThisCppCodeBase = true;
    bool isThisJavaCodeBase = false;

    cout << "isThisCppCodeBase : " << isThisCppCodeBase << endl; // Outputs 1 (true)
    cout << "isThisJavaCodeBase : " << isThisJavaCodeBase;        // Outputs 0 (false)
}
