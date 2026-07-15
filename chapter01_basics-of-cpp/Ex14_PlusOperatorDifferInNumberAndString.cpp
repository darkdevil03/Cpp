#include <iostream>
#include <string>

using namespace std;
int main () {
    // Case-1
    int num_1 = 10;
    int num_2 = 20;
    int result = num_1 + num_2;
    cout << result << endl;

    string str_1 = "10";
    string str_2 = "20";
    string concate  = str_1 + str_2;   // z will be 1020 (a string)
    cout << concate << endl;

    string str = "10";
    int num = 20;
    // string answer = str + num; // error;

}
