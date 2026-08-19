#include <iostream>

int main() {

    int a = 10;
    int *p = &a;

    printf("Given value of a = %d\n", a);
    printf("Value pointer p = %p and Address of a = %p\n", p, &a);
    printf("Dereference of pointer *p = %d\n", *p);

    *p = 20; // Here, it can change the value;

    printf("After changing the value of 'a' via dereference of pointer *p %d\n", *p);
    printf("Value of a = %d\n", a);

    return 0;
}
