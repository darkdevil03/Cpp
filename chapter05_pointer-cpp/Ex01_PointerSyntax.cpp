/**
    Scenario:
        Demonstration of direct memory manipulation using pointers.

    Details:
        This module illustrates how pointers interact with memory addresses
        to modify variables outside their local scope—a foundational concept
        in Linux C/C++ system programming.
 */

#include <iostream>

/**
 @brief Swaps the values of two integers using their memory addresses.
 * * By passing pointers, we avoid copying the values (pass-by-value) and instead
 * directly manipulate the physical memory locations of the original variables.
 * * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void swap(int* a, int* b) {
    // 1. Dereference 'a' to read its underlying value.
    // Store this in a local, constant temporary variable.
    const int temp = *a;

    // 2. Dereference 'b' to read its value, then write that value
    // directly into the memory address pointed to by 'a'.
    *a = *b;

    // 3. Write the stored temporary value into the memory address
    // pointed to by 'b'.
    *b = temp;
}

int main() {
    // [Execution Flow: Initialization]
    // The OS allocates memory on the stack for two 32-bit integers.
    int a = 10;
    int b = 20;

    std::cout << "--- Pointer Swapping Execution Flow ---" << std::endl;
    std::cout << "[Memory State] Before swap: a = " << a << " | b = " << b << std::endl;

    // [Execution Flow: Function Call]
    // We pass the memory addresses of 'a' and 'b' using the '&' operator.
    // If 'a' is at memory address 0x7ffe..., that exact hex value is passed to swap().
    swap(&a, &b);

    // [Execution Flow: Result]
    // The variables in this stack frame have been successfully modified by the swap function.
    std::cout << "[Memory State] After swap:  a = " << a << " | b = " << b << std::endl;

    return 0;
}