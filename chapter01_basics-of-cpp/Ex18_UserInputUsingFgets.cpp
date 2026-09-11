
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    cout << "Enter your input string " << endl;
    string input;
    fgets(getline(cin,input,'\n'));

    cout << "Enter the input : " <<input << endl;

    return 0;
}
