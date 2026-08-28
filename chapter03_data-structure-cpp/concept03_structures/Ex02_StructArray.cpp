#include <iostream>
using namespace std;

struct struct_test{
    int id;
    char name[20];
    int age;
}user[20];


int main(){

    for (int i = 0; i < 3; i++) {
        cout << "Enter your Id: " << endl;
        cin >> user[i].id;
        cout << "Enter your name: " << endl;
        cin >> user[i].name;
        cout << "Enter your age: " << endl;
        cin >> user[i].age;
    }


    cout << "Entered Details: " << endl;

    for (auto & i : user) {
        cout << "User ID: " << i.id << endl;
        cout << "User Name: " << i.name << endl;
        cout << "User Age: " <<  i.age << endl;
    }


    return 0;
}