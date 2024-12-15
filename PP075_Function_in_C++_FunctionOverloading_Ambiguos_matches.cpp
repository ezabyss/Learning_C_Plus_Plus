//Ambiguous matches.


#include <iostream>
using namespace std;

void Print(unsigned int n)
{
    cout<<"\n n :" <<n ;
}
void Print(float f)
{
    cout<<"\f   :" <<f ;
}
int main()
{
    Print('a');
    Print('0');
    Print(3.14159);

    return 0;
}
/*
if a function call matches multiple candidates via standard conversion or user-defined conversion, an ambiguous match wil result because all standard conversion are considered equal , and all user- defined conversions are considered equal.
For Example :
There are two function prototypes like:
    void print(unsigned int n);
    void print(float f);
    if we call function by using following arguments
    Print('a');
    Print(0);
    Print(3.14159);

    * In the case of Print ('a'), C++ Can't find an exact match. It tries promoting 'a' to an int, but there is no Print(int) either. Using a Standard conversion, it can convert 'a' to both an unsigned int and a floating point value. Because all standard conversions are considered equal. This is an ambiguous match.
    * Print(0) is similar, 0 is an int, and there is no Print(int). It matches both call via standard conversion.
    * Print(3.14159) might be a little surprising, as most  programmers would assume it matches Print(float). But remember that all literal floating point values are doubles unless they have the 'f' suffix. So, 3.14159 is a double, and there is not Print(double). Consequently, it matches both calls via standard conversion.

    Ambiguous matches are considered a compiler-time error. Consequently, an ambiguous match needs to be disambiguated before our program will compile. There are two ways to resolve ambiguous matches:
    i. Define a new overloaded function that takes parameters of exactly the types are trying to call the function with.

    ii. Explicitly cast the ambiguous parameter(s) to the type of the function we want to call. For example., to have Print(0) call the Print(unsigned int), we call. For Example, to have Print(0) call the Print(unsigned int), we would do this: Print (Unsigned int) 0); //will call Print(unsigned int);

*/
