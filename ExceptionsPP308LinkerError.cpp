/*
Sometimes a program is correct with syntax & logic and it is compiled  successfully But during linking phase, the error will occur due to  wrong function prototyping and incorrect header files. This type of error is known as linking or linker error. These are error generated when an exe of the program can't be generated at the time of execution of the program.

*/
//WAP to illustrate the linking error_category
#include <iostream>
using namespace std;

int Add(int,int);
int main()
{
    /* // My Way
    int a =5, b =7;
    cout<<"\n Sum is : "<<Add(a,b));
    */
    Add(5,10);

    return 0;
}
//When the above program is compiled, it doesn't show any error. But it will show liker error at the time of execution of the program. This program has function prototype for the function sum() but there is no function definition. So, when the above program is executed, the following message will be appeared.

//Undefined reference to Add(int, int);
