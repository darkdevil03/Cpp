#include <iostream>
using namespace std;
int main() {
    /*
        When you do not want others (or yourself) to change existing variable values,
        use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):
     */
    const double pi = 3.14159;

    // error: assignment of read-only variable 'pi'.
    // pi = 3.2;

    cout << pi << endl;
}
