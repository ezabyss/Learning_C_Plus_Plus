//Multiple Catch Block

/*
In some cases, more than one exception could be raised by same piece of code in a program. To handle different types of situations, we can specify two or more catch blocks, each catching a different types of situation, we can specify two or more catch blocks, each catching a different type of exception. When an exception is thrown, each catch statement is inspected in order, and the first one whose type matches with that of exception, is executed. After one catch statement executes, the others are bypasses and execution continues after the try/catch block
catch(type1 argument)
{ //code }

catch(type2 argument)
{ //code }
.
.catch(typen argument)
{ //code}

*/

//WAP to illustrate the use of multiple catch blocks.
#include <iostream>
using namespace std;

int main()
{

    char msg[] = " Divide By Zero .. ";
    int nums[] = {1,2,3,4,10,20,30,40,50,90};
    int n, counter;

    try
    {
        cout<<"\n Enter a number for divisor : ";
        cin>> n;
        cout<<"\n How Many results do you want : ";
        cin>> counter;

        for(int i = 0;i<counter;i++)
        {
            if(i>9)
                throw i;
            if(n==0)
                throw msg;
            cout<<" The quotient is : "<<nums[i]/n <<endl;

        }
    }
    catch(char str[])
    {
        cout<<"\n Exception : "<<str;
    }
    catch(int index)
    {
        cout<<"\n Index : "<< index <<"\n is Out of Range. ";
    }

}
