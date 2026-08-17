#include <iostream>
#include <ostream>

using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "Before swap" <<endl;
    cout << a << "\t" << b << endl;
    swap(&a, &b);
    cout << "After swap" <<endl;
    cout << a << "\t" << b << endl;

    return 0;

}