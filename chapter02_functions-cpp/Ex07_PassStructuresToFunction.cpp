#include <iostream>
using namespace std;

struct myStruct {
    int num;
    string name;
};

/*
    Pass Structure to a Function
        You can also pass a structure to a function.
        This is useful when you want to work with grouped data inside a function:
*/
void alterStructValuePassByValue(myStruct in) {
    in.name = "Deva";
}

/*
    Pass by Reference
        You can also pass a structure by reference, using &.
        This allows the function to modify the original data:
 */
void alterStructValuePassByReference(myStruct &in) {
    in.name = "Deva";
}

// main method
int main() {
    myStruct myStruct1;

    myStruct1.num = 5;
    myStruct1.name = "John";
    cout << "-----Strutures Values-----" << endl;

    cout << "------Pass by Value------"<<endl;
    cout << "Before Alter name : " << myStruct1.num << "\t" << myStruct1.name << endl;
    alterStructValuePassByValue(myStruct1);
    /*
    Note: Since the structure is passed by value, the function gets a copy of the structure.
          This means that the original data is not changed.
     */
    cout << "After Alter name : " << myStruct1.num << "\t" << myStruct1.name << endl;

    cout << "\n------Pass by Reference------"<<endl;
    cout << "Before Alter name : " << myStruct1.num << "\t" << myStruct1.name << endl;
    alterStructValuePassByReference(myStruct1);
    /*
       Tip: Use reference if you want the function to change the structure's data, or to avoid copying large structures.
     */
    cout << "After Alter name : " << myStruct1.num << "\t" << myStruct1.name << endl;


    return 0;
}