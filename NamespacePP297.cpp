/*

Namespace is defined as name given to scope or logical grouping of variables. functions and classes in C++. In general, we can't define two classes with same name in a prototype within same class. But sometimes there may be situation where functions, variables for  classes in one program will match with existing names of variables, functions and classes such that there will be conflict in identifier's, and allows the disambiguation of homonym(i.e. having same name) identifiers residing in different scopes.

Namespace is a new concept introduced by ANSI C++ standards committee. For using identifiers defined in the namespace scope, we must include the using directive like using namespace std;

Here, std is a namespace where ANSI C++ standard class libraries are defined. All ANSI C++ programs must include this directive. This will bring all the identifiers defined in std to the current global scope. Using and namespace are new keywords of ANSI C++. Thus, they are not supported by older versions of C++ compilers.

*/
//Defining Namespace
/*
We can define own namespaces in C++ program. The syntax for defining a namespace is similar to syntax for defining a class. The general form of namespace is :
namespace namespace_name
{
    //declaration of variables, functions and classes
}
*/
//WAP bot illustrate the use of namespace
#include <iostream>

using namespace std;

namespace Number
{
    int num=10;
}

int main()
{
    int num = 20;
    cout<<"\n Inside main::num    : "<< num;
    cout<<"\n Inside number::num  : "<< Number::num;
    return 0;
}
/*
In this example, a variable num is defined within a namespace Number. Another variable num is again defined in main() function. The scope resolution operator is used to use identifiers defined within namespace. Thus, the above program has two variables of name num, one defined within main() function and other within Number namespace

The identifiers-declaration that fall outside of all namespaces are member of a global namespace. Members of a named namespace can be efined outside of the namespace in which they are declared .In this case it is necessary to explicitly qualify the name using scope resolution operator.

namespace MyNamespace
{
    void Display();
}
void MyNamespace::Display()
{
    //...
}

A namespace definition can only appear at global scope. The following ccode would cause an error as namespace is defined within scope of main() function.

void main()
{namespace MyNamespace //error because it has no global scope
}
*/
