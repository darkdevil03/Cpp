#include <functional> // For, 3. Passing Lambdas to Functions
#include <iostream>
using namespace std;

/*
    Lambda Functions
        A lambda function is a small, anonymous function We can write directly in our code.
        It's useful when We need a quick function without naming it or declaring it separately.
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
    /*
        We can use the [ ] brackets to give a lambda access to variables outside of it.
        This is called the capture clause.
        In this example, the lambda captures the variable x by value (a copy):
     */

    cout << "------------------------------------------" << endl;
    cout << "|           4. Capture Clause []         |" << endl;
    cout << "------------------------------------------" << endl;

    // a) Capture by Value
    cout << "\n-------a) Capture by Value-------"<< endl;
    int x = 10;
    auto CaptureByValue = [x]() {
        // x = 1; // We can't change the value of x due the clause make 'x' read-only in the lambda via capture.
        // (Cannot assign to readonly type)
        cout << "Accessing the outside value using capture clause [] x "<< endl;
        cout << "Inside Lambda : At CaptureByValue method x = " << x;
    };

    cout << "Before x changes: x = " << x << endl;

    // We don't have permission to change x in lambda function.
    // So, we change outside then we call the CaptureByValue() lambda.
    x++;

    /*
      Note:
        The lambda uses a copy of x. If we change x after defining the lambda,
        it won't affect the value inside the lambda.
    */
    cout <<"x value increased by 1 " << endl;
    CaptureByValue();
    cout << "\nOutside Lambda: At main method x = "<< x << endl;

    // b) Capture by Reference

    cout << "\n-------b) Capture by Reference-------"<< endl;

    int y = 20;

    auto CaptureByReference = [&y]() {
        cout << "Accessing the outside value using capture reference " << y << endl;
        cout << "Inside Lambda : At CaptureByReference method y = " << y;
    };

    cout << "Before y changes: y = " << y << endl;
    y++;
    cout <<"y value increased by 1 " << endl;

    CaptureByReference(); // // Change y after the lambda is created

    cout << "\nOutside Lambda: At main method y = "<< y << endl;

    cout << endl;


    // 5. Using Lambdas in Loops
    // We can define and use a lambda function inside a loop, which are great for quick actions:

    cout << "------------------------------------------" << endl;
    cout << "|        5. Using Lambdas in Loops       |" << endl;
    cout << "------------------------------------------" << endl;

    for (auto i = 1; i <= 4; i++) {
        // using capture clause []: for accessing outside values
        auto messageIterate = [i] {
            cout << "Count " << i << endl;
        };

        messageIterate();
    }

    
    return 0;
}

/*
    Regular Functions vs Lambda Functions
        Both regular functions and lambda functions let We group code and run it later, but they are used in slightly different situations.

        Use a regular function when:
            We plan to reuse the function in multiple places
            We want to give the function a clear, meaningful name
            The logic is long or complex
        
        Use a lambda function when:
            We only need the function once
            The code is short and simple
            We want to pass a quick function into another function
 */





