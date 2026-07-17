#include <iostream>
#include <vector>
using namespace std;

int main() {

    /*
     Vectors: Dynamic Size
        For operations that require adding and removing array elements, C++ provides vectors, which are resizable arrays.
        The size of a vector is dynamic, meaning it can grow and shrink as needed.
        Vectors are found in the <vector> library, and they come with many useful functions to add, remove and modify elements.
     */

    // A vector with 3 elements
    vector<string> cars = {"Tata", "Ford", "Audi"};

    // Adding another element to the vector
    cars.emplace_back("Tesla");

    // Printing
    for (const auto & car: cars) { // const auto & or string type
        cout << car << "\t";
    }

    return 0;
}
