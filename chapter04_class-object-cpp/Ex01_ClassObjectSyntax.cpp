#include <iostream>
using namespace std;

class myClass {
    public:
    void showMyClass() {
        cout << "showMyClass" << endl;
    }

};
int main() {
    myClass obj;
    obj.showMyClass();

    return 0;
}