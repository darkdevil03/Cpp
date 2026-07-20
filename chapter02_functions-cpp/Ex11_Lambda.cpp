#include <iostream>
using namespace std;

/*
    Lambda Functions
        A lambda function is a small, anonymous function you can write directly in your code.
        It's useful when you need a quick function without naming it or declaring it separately.
        Think of it as a "mini function on the fly."

    Syntax
        [capture] (parameters) { code };
 */

int main() {

    auto message = [](){
        //return "Hello World!";
        return "Hello World!";
    };

    cout << message();
    return 0;
}
