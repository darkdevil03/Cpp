#include <iostream>
using namespace std;

/*
    Lambda Functions
        A lambda function is a small, anonymous function you can write directly in your code.
        It's useful when you need a quick function without naming it or declaring it separately.
        Think of it as a "mini function on the fly."

    Syntax
        [capture] (parameters) { code };
                        or
        [capture] (parameters) -> data_type { code }; // "-> data_type" is optional
 */

int main() {

    auto messageVoid = []() -> void {
        cout << "Hello world, This is void type " << endl;
    };

    messageVoid();

    auto messageString = []() -> string{
        //return "Hello World!";
        return "Hello World, This is a string type!";
    };

    cout << "String type without parameter : "<< messageString() << endl;


    return 0;
}
