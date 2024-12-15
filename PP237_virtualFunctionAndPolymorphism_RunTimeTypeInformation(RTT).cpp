
//RTTI Run Time Type Identification or Information. It provides some information about object at run time such as the name of its type. It is useful in applications in which the type of objects i known ony at run-time. RTTI allows program that manipulate objects or references to base classes to retrieve the actual derived types to which they point to at run-time.
/*
    Two operator are provide by in C++ for RTTI

a. dynamic_cast operator
        The dynamic_cast operator can be used to convert a pointer that refers to an object of class type to a pointer to a class in the same hierarchy. It performs a runtime cast along with verifying the validity of cast. If the cast is invalid, then the cast fails. On Failure to cast the dynamic_cast operator return 0. The syntax cf the dynamic cast is as follows:

        dynamic_cast<target_type>(expression)

b. It is a type casting method which is used to check the type of an expression. In C++, The type Id keyword can be  used to determine the class of an object at runtime when a program manipulates an object through a pointer or a reference to a base class, the program needs to find out the actual type of the object manipulated
*/

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int *a;
    double *b;
    cout<<" The type of a is : "<< typeid(a).name() << endl;
    cout<<" The type of b is : "<< typeid(b).name() << endl;

    cout<<"\n In above output Pi denotes pointer Integer & \n \t\t Pd denotes pointer Double. \n Thus, the typeid provides type of expression.\n\n";

    return 0;
}
