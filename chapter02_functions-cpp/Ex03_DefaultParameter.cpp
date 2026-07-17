#include <iostream>
using namespace std;

/*
    1. C++ Default Parameters :
        we can also use a default parameter value, by using the equals sign (=).
        If we call the function without an argument, it uses the default value ("Indian"):
 */
void defaultParameters(string citizen = "Indian") {
    if (citizen == "Indian") {
        cout << "Default parameter printed : " << citizen << endl;
    }else {
        cout << "Passed argument printed : " << citizen << endl;
    }
}

/*
    2. Multiple Parameters:
        Inside the function, we can add as many parameters with same or different data type as we want:
 */
void multipleParameters(int id, string name) {
    cout << "Student Id : "<< id << "\tStudent Name : " << name << endl;
}

int main () {

    cout << "------------------------------------------" << endl;
    cout << "|          1. Default Parameter          |" << endl;
    cout << "------------------------------------------" << endl;

    // A parameter with a default value, is often known as an "optional parameter".
    // From the defaultParameters function above, country is an optional parameter and "Indian" is the default value.
    defaultParameters();
    
    defaultParameters("Germany");

    cout << "------------------------------------------" << endl;
    cout << "|          2. Multiple Parameters        |" << endl;
    cout << "------------------------------------------" << endl;

    /*
        Note: that when we are working with multiple parameters,
        the function call must have the same number of arguments as there are parameters,
        and the arguments must be passed in the same order.
     */
    multipleParameters(1, "Dev");

    multipleParameters(2, "Ram");

    return 0;
}
