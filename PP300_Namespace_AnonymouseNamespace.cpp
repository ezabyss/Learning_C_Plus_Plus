//Anonymouse Namespace
/*
We can define a namespace without name. Such type of namespace is known as anonymous or unnamed namespace. Unnamed namespace member occupy global scope and are accessible in all scopes following the declaration in the file.

Syntax:
namespace
{
    class Box
    {..//class members hera
    }
    //other members here
}
For each unnamed namespace, the compiler generates a unique name, which differs from every other name in the program. Unnamed namespaces can also be defined inside other namespaces.
*/

#include <iostream>
using namespace std;

namespace
{
    int i = 4;
    int m;
}

int main()
{

    cout<<" \n i  : "<< i<<endl;
    m = 100;
    cout<<" \n m  : "<<m;

    return 0;
}
/*
Here , the variable i and m have been defined within unnamed namespace. As unnamed namespace occupy global scope, they can be accessed within main() function
*/
