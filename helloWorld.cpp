/*
    1. #include <iostream>:
        -> # (Preprocessor Signal): Anything starting with a # is a instruction for the preprocessor—a program that cleans up and
                                 prepares our code before the actual compiler turns it into machine language.
        -> include: This is the command telling the preprocessor to literally copy and paste the contents of another file right here.
        -> <iostream> (Input/Output Stream): This is a standard header file built into C++.
        -> Stream: Think of a stream as a conveyor belt of data moving from one place to another.
        -> i (Input): Handles data coming into the program (like typing on a keyboard).
        -> o (Output): Handles data going out of the program (like printing text to our monitor).

    2. using namespace std;
        -> To understand this line, you first need to understand what a namespace is.
        -> What is a Namespace? (scenario)
            Imagine a massive school where two different students are named "Alex".
            If a teacher yells "Alex!" in the hallway, everyone gets confused.
            To fix this, the school puts them in different classrooms: "Room A" and "Room B".
            If you want the Alex from Room A, you have to say "Room A's Alex."
        -> In programming, a namespace is that classroom. It prevents naming conflicts.
        -> Because millions of people write C++ code, it's highly likely that two developers might name a tool the exact same thing.
    Breakdown:
        std: This stands for Standard. Virtually every tool built into the official C++ Standard Library (like cout, cin, vector, string)
             lives inside the std namespace classroom.
        using namespace std;: This line tells the compiler, "Hey, look inside the std classroom by default.
             If I type a name, and you don't recognize it, check the standard library room first."

*/

// Code:

// header file library
#include <iostream>

// we can use names for objects and variables from the standard library.
using namespace std;

// Another thing that always appear in a C++ program is int main().
// This is called a function.
// Any code inside its curly brackets {} will be executed.
int main() {

    // Statements: In a programming language, these programming instructions
    // Every C++ statement ends with a semicolon ;
    // cout: is an object used together with the insertion operator (<<) to output/print text.
    // C++ is case-sensitive: "cout" and "Cout" has different meaning.
    cout << "Hello World! without std" << endl;
    // for omitting namespace
    std::cout << "Hello World! with std" << std::endl;

    // ends the main function.
    return 0;
}