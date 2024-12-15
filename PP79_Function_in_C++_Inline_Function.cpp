//Create inline function to calculate simple interest from p,t,r;
#include <iostream>
using namespace std;
inline float intrest(float p, float t, float r)
{
    return ((p*t*r)/100);
}
int main()
{
    float result;
    result = intrest(12000,2,10);

    cout<<"\n The interest is "<< result;
    return 0;
}

/*
The function which contains small number of lines of codes can be declared as inline by proceding keyword inline in function  declaration. Inline function is the optimization technique used by the compiler to speed up program execution. The coding normal functions and inline functions is similar except that inline functions definitions start with the keyword inline.
WE know that the advantage of using function is re-usability of the code. When the same task is to be done for multiple times, a function is used to save memory space and reduce size of the code. But, the use of function not only saves memory space but also adds extra overheads. The calling of a function requires activities like jumping to the function definition, saving registers(i.e. memory values), pushing arguments int the stack and returning result to the calling function. These instructions take time for execution. When the size of function is large, this time can be compromised as it reduces size of code much(i.e disadvantages are less than advantages). But when the size of function is small, the use of function seems useless as the advantage of function in reduction of code is less than disadvantage of function due to extra time taken by instructions during calling function. We may argue that the use of function is disadvantageous in small sized-function. The use of duplicate of code to perform same task repeatedly seems more advantageous than the us  of function in such situation. But duplication of code makes program unorganized and difficult to read.This problem is eliminated by inline function in c++ . When an inline function is called, the compiler will replace the function  call with the function code. So in reality, there will be no function call in that place , only the code of the function is copied. No jumping is needed to different addresses such that it doesn't add extra time for jumping to function definition and returning   the result to calling program. So, the concept of inline function utilizes the advantages of using of a functions with no extra overhead execution time in small functions.
A function is made inline by adding prefix inline to the function definition. The syntax is :
    inline return_type function_name(argument_list)
        { function body }
*/

