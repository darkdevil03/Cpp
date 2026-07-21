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
    cout << "|       1. Lambda without Parameters     |" << endl;
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

    cout << endl;

    // 2. Lambda with Parameters

    cout << "------------------------------------------" << endl;
    cout << "|       2. Lambda with Parameters        |" << endl;
    cout << "------------------------------------------" << endl;

    auto addTwoNumber = [](int num1, int num2) -> int {
        return num1 + num2;
    };

    cout << "Addition of two numbers : " << addTwoNumber(4,8) << endl;

    auto multiplyTwoNumber = [](int num1, int num2) {
        return num1 * num2;
    };

    cout << "Multiplication of two numbers : " << multiplyTwoNumber(4,8) << endl;

    cout << endl;

    // 3. Passing Lambdas to functions

    cout << "------------------------------------------" << endl;
    cout << "|     3. Passing Lambdas to Functions    |" << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
