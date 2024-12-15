//Use of Scope Resolution Operator
/*
We can use namespace identifier with scope resolution operator to qualify a member of a namespace explicitly.

Syntax:

    namespace_name::member; // when a member of the namespace is accessed
*/
//Use of scope resolution operator to access members.

#include <iostream>

using namespace std;

namespace First
{
    float f = 4.56;
    int i = 100;
}
int main()
{

    cout<<"\n f = \t"<< First::f; //Using Scope Resolution
    cout<<"\n i = \t"<< First::i; //Using Scope Resolution


    return  0;

    /*
    In this example, the members of namespace are accessed using scope resolution operator. When members(i.e. f and i in this case) of a namespae are used, we must use namespace_)name and scope resolution operator in front of them
    */
}
