//Types of Error In program
/*
Errors may occur due to human mistakes or system failure while writing a program. any program may contain error. Mainly there are four types of errors.
1) Compiler/Syntax Error
2) Logical Error
3) Linker Error
4) Run time Error
*/
//Syntax Error
/*
The syntax error occurs either due to typing mistake in syntax or by writing wrong syntax. These types of errors occur from incorrectly written code, such as an incorrectly typed keyword or incorrectly spelled variables. The syntax error arises in the program due to poor understanding of the language or grammer itself. Some of the reasons of syntax errors are:

i. due to mistakes in grammatical rules used in declaration of identifier.
ii. Use of undefined identifiers in program.
ii. Non-termination of statement by semicolon.
iv. Not providing equal number of opening and Closing braces etc.

these error can be rectified by user as they are detected while compiling the program. One point to be noted is that the compiler checks syntax error before compilation  process and compilation is not possible without correcting syntax error present in the program.

*/

//Program Having Syntax Error

#include <iostream>

using namespace std;

int main()
{
    int a   // semicolon is missing
    cout<<"\n a : " << a;

    return 0;
}
