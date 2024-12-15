//WAP to use the exception handling for divide by zero error.

#include <iostream>

using namespace std;

int main()
{
    float num1, num2, result;
    cout<<"\n Enter Two numbers: ";
    cin>>num1>>num2;
    try{
    if(num2!=0)
        {
            result = num1/num2;
            cout<<"\n The result is: "<< result;
        }
        else
            throw num2;
    }
    catch(float n)
    {
        cout<<"\n The divisor must be non-zero value ";
        cout<<"\n Try again for another divisor.... ";


    }
        return 0;
}
/**
The above program uses try, catch and throw block for exception handling When user enters zero as divisor, the exception occurs in the program and the exception is thrown to catch block. The catch receives the exception and shows user-defined message to user. if non zero value is entered by user, the program is executed in normal flow and the program control didn't go to catch block.

*/
