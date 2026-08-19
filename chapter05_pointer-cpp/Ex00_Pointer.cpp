#include <iostream>

int main() {

    int a = 10;
    int *p = &a;

    printf("Given value of a = %d\n", a);
    printf("Pointer p = %p and Address of a = %p\n", p, &a);
    printf("Dereference of pointer : %d", *p);

    //p =

    return 0;
}
