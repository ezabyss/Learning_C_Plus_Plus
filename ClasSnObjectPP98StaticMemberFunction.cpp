
//WAP to illustrate static member function

#include <iostream>
#include <iomanip>

using namespace std;

class Box
{
private:
    static int count;

public:
    static int GetCount()
    {
        return count;
    }
    static int IncreaseCount()  //Static function can have only access to other static variable
    {
        count++;
    }

};
int Box::count;

int main()
{
    cout<<endl<<"Initially Value of count: "<<Box::GetCount()<<endl;
    //Box b1, b2, b3;

    Box::IncreaseCount();
    Box::IncreaseCount();
    Box::IncreaseCount();

    cout<<"Finally value of count: "<< Box::GetCount()<<endl;
    return 0;
}










/*
A class may also have static methods as its member. Static function is defined by using the keyword static before the member function that is to be eclared as static function.
for eg:

    static return_type function_Name(argument_list)
{
//function body;
}
A normal member function of a class is accessed using object of that class and dot operator . the functions declared with the keyword static(i.e. static functions) are accessed using only class name and scope resolution operator, unlike in normal member functions.

class_name:: function_name(argument_list);

Characteristics:

a) A static member function is independent of the class instances orobjects A static member function is associated with the class, not its object whena member is declared as static, a static member of class, it has only one data for the entire class even though there are many objects created for the class

b) It is invoked as a member of the class usin scope resolution operator.

c) A static member function can have access to only other static member
(function or variables) declared in the same class. It can't access non-static members.

d) Static member functions donot have access to the 'this' pointer of the class.

e) They cannot be declared as virtual.

*/
