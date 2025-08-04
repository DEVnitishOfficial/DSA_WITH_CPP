/* 
Explanation of : #include <iostream>

#include:
 This is a preprocessor directive. It tells the compiler to include the
 contents of another file into your current file before the compilation process begins.


 <iostream> :
 This is the name of the standard library header file.

 This header file provides us with the tools to handle input and output operations, most importantly std::cout and std::cin.

 io : 
 The "io" stands for "Input/Output".

 stream : 
 The "stream" refers to the flow of data.

 <> : 
 The angle brackets around <iostream> tell the compiler to look for this file in the standard library's default include path.

*/

/*
Explanation of : int main() {}

int : 
This is the return type of the function main, to the operating system after it has finished executing.

main : 
It's the entry point of every C++ program, when we run our program operating system looks for a function named main and starts executing the code from there

() : 
It indicates main is a function and can be passed argument to this function.

{} : 
Indicates body of the main function, and will be executed when the program runs.
 */

/*
Explanation of : std::cout << "Hello, World!" << std::endl;

std::cout :
This is the standard output stream object.

std :
std is the "standard" namespace, where most of the C++ standard library is defined.

namespace is a way to group related names (like function names or variable names) to avoid naming conflicts.

::   :
it's a scope resolution operator.
It tells the compiler, "Look for cout inside the std namespace."

cout : 
It's an object representing the standard output device, which is usually your computer screen or console.

std::cin---> cin : 
cin refers to the standard input stream object. It is an instance of the istream class and is used to read data from the standard input, typically the keyboard

<<  :
it's a stream insertion operatior.

>>  : 
This is the stream extraction operator. It "extracts" data from the input stream 

std::endl: 
*This is a manipulator.
*endl stands for "end line."
*It does two things: it inserts a newline character (moving the cursor to the next line) and it "flushes" the output buffer, ensuring that the text is immediately displayed on the screen.

return: 
This is a keyword that exits the function and returns a value.

0: 
This is the integer value that the main function returns to the operating system.

*/


#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


// #include <iostream>
// using namespace std; // This is the new part

// int main() {
//     cout << "Hello, World!" << endl; // Notice std:: is gone
//     return 0;
// }


/*
next step

Learn the Basics: Before you jump into DSA, you need to understand the fundamental building blocks of C++. Focus on these topics first:

Variables and Data Types: int, char, double, bool, etc.

Input and Output: Using cin and cout.

Control Flow: if-else statements, switch statements.

Loops: for loops, while loops, do-while loops.

Functions: Creating and calling your own functions.

Arrays: Storing collections of data of the same type.

Practice: The best way to learn is to write code. Start with small programs like:

Taking two numbers as input and printing their sum.

Checking if a number is even or odd.

Printing a pattern of stars.
*/

