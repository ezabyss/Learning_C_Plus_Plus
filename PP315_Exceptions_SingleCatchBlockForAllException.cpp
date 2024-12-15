//Catching all types of exceptions by single catch block
/*
We can force a catch statement to catch all types of exceptions instead of a certain specefic type. This situation arises when we are unable to identify all possible types of exceptions in the program .This could be done by defining the catch statement using ellipses as follows:
Syntax:
    catch(...)
    {//statement for prcessing all exception
    }
*/
#include <iostream>
using namespace std;

int main()
{
    char msg[] =" Divide By Zero.. ";
    int nums[] = {1,2,3,4,10,20,30,40,50,90};
    int n, counter;
    try
    {
        cout<<"\n Enter Divider : ";
        cin>> n;
        cout<<"\n Enter number of Result You want : ";
        cin>> counter;
        for(int i = 0;i<counter;i++)
        {
            if (n==0)
                throw msg;
            if (counter > 10)
                throw counter;
            cout <<"\n The Quotent is : "<<nums[i]/n;
        }
    }
        catch(...)
        {
            cout<<"\n Exception occurred.!!~ ";
        }

    return 0;
}
/*
In this example, the program code can throw two types of errors: int and string(i.e divide by zero and array index out of size) but there is only one catch block. The single catch block can receive various types of exceptions and handle them.
*/
