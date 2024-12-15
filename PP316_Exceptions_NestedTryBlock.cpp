//Nested Try Block

/*
one try block can be written into another try block, called nested try block. The outer try block can contan another inner try block. When try blocks are nested and a throw occurs in a function called by an inner try block, control is transferred outward through the nested try blocks until the first catch block is found whose argument matches the argument of the throw expression.
syntax:

try
{
func1();
try
    {
        func2();
    }
    catch(type argument)
    {
        //catch block for inner try.. "
    }
    func3();
}
catch(type argument)
{
/* Catch block for outer try.. ";
}
//If no throw is issues, control resumes here.

    In the above example, the error from inner try block(in this case, from func2()) are caught by the inner catch block and the outer try block contains functions fun1(), func2() and func3(). Thus, exceptions occurred in those functions are caught by outer catch block. If no exception is thrown, program is executed in normal way and control goes to next statement of outer catch block without passing into any catch block.

    We can also nest a try block within a catch block. We may have a outermost try-catch construct we can have another try-catch construct in its catch block. This chain continues. inside each catch block, an attempt is made to solve the problem. If the problem cannot be solved, then the try-catch construct in the catch block is executed, and this may call another inner try-catch block

    Syntax:

    try
    {
    func1()
    }
    catch(type argument)
    {
    ..
    try
    {fun2();
    }
    catch(type argument)
    {
    ..
    }
    }

    //if no throw is issued, control resucmes here
*/
//WAP to use nested try block

#include <iostream>

using namespace std;

int main()
{
    float numerator, denominator,answer;
    cout<<"\n Enter Numerator & Denominator : ";
    cin>>numerator>>denominator;
    try
    {
        if(denominator !=0)
           {
               answer = numerator /denominator;
               cout<<" ans : "<< answer;
           }
        else
           {
               if(denominator == 0)
                  throw 0;
           }
    }
    catch (int e)
    {
        cout<< " Division by zero is not allowed! ";
        cout<< "\n Enter non-zero denominator... ";
        cin>> denominator;
        try //inner try block within catch block of outer try block
        {
            if(denominator ==0)
                throw 0;
            else
                {
                    answer = numerator/denominator;
                    cout<<  " ans = " << answer;
                }
        }
        catch (int e)// inner catch block
        {
            cout<<e <<" is not allowes as divisior.. ";
        }
    } // outer catch block ends

    return 0;
}

