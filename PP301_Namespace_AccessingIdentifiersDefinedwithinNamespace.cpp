//Accessing idetifiers Defined within Namespace
/*
We can access any identifiers defined within a namespace in two ways.

Use of using keyword
Use of scope resolution operator
*/
//Using Keyword
/*
The keyword using is used to afccess all member or selected members: declared within the specified namespace by introducing namespace into the current declarative region. We can use using keyword in two ways:

a) Using Directives
        A using directive provides access to all namespace qualifiers and the scope operator. This is accomplished by applying 'using' keyword to a namespace identifier.

Syntax:
using namespace namespace_name;
The namespace_name must be a previously defined namespace. The using directive may be applied at global and local scope but not class-level scope. Local scope takes precedence over global scope by hiding similar declarations.


b) Using Declaration
        A using declaration provides access to a specific namespace member. This is accomplished by applying the using keyword to a namespace name with its corresponding namespace member
        Syntax:
            using namespace namespace::member;
*/

//Use of 'using' keyword to access all member through using directives. & to access Selected member through using declarations

#include <iostream>
using namespace std;

namespace First
{
    float f = 4.56;
    int i = 100;
}

namespace Second
{
    float Fs = 329.59;
    int   Is = 1234;
}
int main()
{
    //cout<<"\n f : "<< f;
    //cout<<"\n i : "<< i;
    using namespace First; // Using Directives
    cout<<"\n f : "<< f;
    cout<<"\n i : "<<i;

    using Second::Fs; // Using Declaration
    cout<<"\n Fs : "<< Fs;

    using Second::Is; // Using Declaration
    cout<<"\n Is : "<< Is;

    return 0;
    /*
    In this example we have used using declaration in statement: using First::f;. Then, we can access only selected members(i.e. f in this case) in the program.
    */
}

