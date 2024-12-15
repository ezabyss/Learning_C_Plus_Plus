//Run Time Error
/*
Run time error is such type of error which occurs during execution of the program. The program having run time error is compiled successfully but error occurs  when a statement attempts an  operation that is impossible to carry out. For example, statement  that attempts to divide by zero, statement  that attempts to open non-existent file for reading purpose etc will result runtime error.
*/
//WAP to illustrate runtime error_category
#include <iostream>

using namespace std;
int main()
{

    float dividend, divider, quo;
    cout<<"\n Enter value of dividend : ";
    cin>> dividend;
    cout<<"\n Enter value of Divider  : ";
    cin>>divider;

    quo = dividend / divider;
    cout<<"\n The result is : "<< quo;

    return 0;

}
