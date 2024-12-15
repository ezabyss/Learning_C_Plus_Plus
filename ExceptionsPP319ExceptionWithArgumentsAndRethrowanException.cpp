//Exception with Arguments
/*
In the catch block, instead of just mentioning type of to catch, we can mention type and object to catch and get the object thrown from the exception. We kanow that when exception is thrown from try block, the control is transfered to the handler along with arguments to the handlers from the throw point. When an object is thrown as exception, the object is passed as argument to the catch block. If we have to htrow cojbects with information, thexception classes are to be declared with members to provide information
of the throw point.
try
{
//throw exception object of class_name type
}
catch(class_name object_name)
{//handles exception on the basis of value of object_name.
*/
//Rethrow an Exception

/*
If a catch block can't handle the particular exception it hascaught, we can rethrow the exception. The rethrow expression( throw without assignment_expression) causes the orginally thrown object to be rethrown.
Because the exception has already been caught at the scope in which the rethrow expression occurs, it is rethrown out to the next dynamically enclosing try block. Therefore, it cannot be handled by catch blocks at the scope in which therethrow expression occurred.
Any catch blocks for the dynamically enclosing try block have an oppurtunity to catch the exception.

*/
//WAP to illustrate the use of rethrowing exception
#include <iostream>

using namespace std;
void RethrowDemo()
{
    try
    {

        throw "hello";
    }
    catch (const char*)
    {
        cout<<" Caught Exception... ";
        throw; // rethrow char* out of function
    }
}
int main()
{
    cout<<" Main start \n ";
    try
    {
        RethrowDemo();
    }
    catch(const char*)
    {
        cout<<"\n Caught exceptin inside Main \n ";
    }
    cout<<"\n Main End. ";

    return 0;
}
