#include <iostream>
using namespace std;

/*
    C++ Default Parameters :
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

int main () {
    // A parameter with a default value, is often known as an "optional parameter".
    // From the defaultParameters function above, country is an optional parameter and "Indian" is the default value.
    defaultParameters();
    
    defaultParameters("Germany");

    return 0;
}
