//Logical Error

/*
The program  having logical errors is compiled and executed successfully but doesn't produce desired result. The logical errors occur due to poor understanding of the problem and solution procedure. If we use an operator in place of another (for example + in place of minus) in an expression and rest of the program is correct, the compiler doesn't detect syntax and run time  error. But the program gives result different from expected result. These errors are usually difficult to detect and debug as such type of error won't be displayed on the screen. Te logical error may be due to:
1. Incorrect algorithm and procedure.
2. Incorrect formula or expression.
3. Incorrect Use of Identifier.
*/
//WAP to illustrate logical error.
#include <iostream>
using namespace std;
int main()
{
    /* // My Way
    int a =5;
    float b = 7;
    cout<<"\n Sum of a & b is : "<< a-b;
    */
    float cent, fah;
    cout<<"\n Enter Temperature in centigrade : ";
    cin>>cent;
    fah = 1.4 * cent + 32;
    cout<<"\n The Equivalent fahrenheit  value is : " << fah;

    return 0;
}
/**
This program is compiled and executed successfully. But it gives wrong result. When the value -40 is given as temperature in centigrade, it should give -40 in Fahrenheit also But The above program displayed value -24 as there is logical error in conversion expression (i.e fah =1.4*cent +32). The expression should be (fah = 1.8*cent + 32); to give correct result. So, above program has logical error.
*/
