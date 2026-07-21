#include <functional> // For, 3. Passing Lambdas to Functions
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



// The below functions belongs to { 3. Passing Lambdas to Functions} concept

void standardFunction(function<void()> func){
    func();
    cout << "In this we use function (from the <functional> library : void standardFunction(function<void()> func) {func();}" << endl;
}

// In case of void with auto we get error due strict validation of type of function library.
// To overcome that we have aAnother way of accepting lambda function using template concept:
template <typename  CustomType> // Custom type using template
void standardFunction2(CustomType printFunc) {
    cout << "String Parameter Passed : "<< printFunc << endl;
    cout << "Using Standard Templates: template <typename  CustomType> \n \t \t \t  void standardFunction2(CustomType printFunc) { prinFunc; } " << endl;
}

// main function
int main() {

    // 1. Lambda without Parameters
    // Here, message holds a lambda function that prints a message to the screen:

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
    // We can pass values into a lambda just like a regular function:

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
    /*
        We can also pass a lambda function as an argument to another function.
        This is useful when we want to tell a function what to do, not just what data to use.
        In the example below, we send a small lambda function with and without parameter to another function, which then runs it twice:
     */

    cout << "------------------------------------------" << endl;
    cout << "|     3. Passing Lambdas to Functions    |" << endl;
    cout << "------------------------------------------" << endl;

    // Lambda without parameter
    auto message = [] {
        cout << "Without Parameter : This message passed from lambda function to another standard function!" << endl;
    };

    standardFunction(message);

    cout << endl;

    // Lambda with parameter
    auto messageParameter = [](string name) -> string {
        return name;
    };

    standardFunction2(messageParameter("dev"));


    cout << endl;

    // 4. Capture Clause []

    cout << "------------------------------------------" << endl;
    cout << "|           4. Capture Clause []         |" << endl;
    cout << "------------------------------------------" << endl;

    int x = 10;
    auto show = [x]() {
        cout << "Accessing the outside value" << x;
    };

    show();




    return 0;
}





