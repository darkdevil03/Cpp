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

    // 1. Lambda without Parameters

    cout << "------------------------------------------" << endl;
    cout << "|     1. Lambda without Parameters       |" << endl;
    cout << "------------------------------------------" << endl;

    auto messageVoid = []() -> void {
        cout << "Void type without parameter : " << "Hello world, This is void type!" << endl;
    };

    messageVoid();

    // For without parameter, we can simply use  auto messageString = {| []{code}; or []->type{code}; |}
    // As shown in below lambda function :
    auto messageString = [] {
        //return "Hello World!";
        return "Hello World, This is a string type!";
    };

    cout << "String type without parameter : "<< messageString() << endl;


    // 2. Lambda with Parameters


    return 0;
}
