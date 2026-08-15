#include <iostream>
using namespace std;

class myClass {
    public:
    static void showMyClass() {
        cout << "showMyClass" << endl;
    }

};
int main() {
    myClass::showMyClass();

    return 0;
}