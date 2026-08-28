#include <iostream>
using namespace std;

struct struct_test{
    int id;
    char name[20];
    int age;
}user;


int main(){

    cout << "Enter your Id: " << endl;
    cin >> user.id;
    cout << "Enter your name: " << endl;
    cin >> user.name;
    cout << "Enter your age: " << endl;
    cin >> user.age;

    cout << "Entered Details: " << endl;
    cout << user.id << endl;
    cout << user.name << endl;
    cout << user.age << endl;

    return 0;
}