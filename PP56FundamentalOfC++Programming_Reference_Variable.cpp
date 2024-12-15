//reference Variable -> just alias (i.e. other name) for a variable
//WAP to illustrate the use of reference variable in c++;

//syntax data_type &ref_variable_name = variable_name;

#include <iostream>
using namespace std;

int main()
{
    int X ;
    int &Xb = X;
    Xb = 100;

    float Y = 300;
    float &Yb = Y;

    cout<<"\n  X   : "<< X;
    cout<<"\n  Xb  : "<< Xb;
    cout<<"\n  Y   : "<< Y;
    cout<<"\n  Yb  : "<< Yb;

     return 0;
}
/*
//Difference between pointer and reference variable

>> A pointer can be re-assigned any number of times while a reference can't be reassigned after initialization.
    for eg:
            int x,y;
            int &ref = x;
            Then, ref= y; //invalid
>> References cannot be null, whereas pointers can; every reference refers to some object, although it may or may not be valid.

>> References cannot be un-initialized. Because it is impossible  to reinitialize a reference, they must be initialized as soon as they are created.
*/
