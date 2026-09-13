#include <iostream>

using namespace std;

class testClass {
    public:
    void testMethod() {
        cout << "Class: testMethod" << endl;
    }
};

int main() {

    testClass test; // object
    test.testMethod(); // invoking the method using class variable (object);

    return 0;
}
