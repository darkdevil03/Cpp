#include <iostream>
using namespace std;

// Pass Arrays as Function Parameters
void myArrayToFunction(int numArray[]) {

    for(int i = 0; i < 5 ; i++) {
        numArray[i] = 100;
    }
}

int main() {

    int myNumbers[5] = {10, 20, 30, 40, 50};
    /*
        Note: that when you call the function,
        you only need to use the name of the array when passing it as an argument myFunction(myNumbers).
        However, the full declaration of the array is needed in the function parameter (int myNumbers[5]).
     */
    myArrayToFunction(myNumbers);

    for (int myNumber : myNumbers) {
        cout << myNumber << endl;
    }

    return 0;
}