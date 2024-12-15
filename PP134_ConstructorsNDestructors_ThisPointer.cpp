//C++ used keyword 'this' to represent an object within a member that invokes it( i.e. it represents the current calling object). The 'this' keyword is a pointer that points to an object for which that member function is called.

//WAP to use 'this pointer' to represent address of object;

#include <iostream>
using namespace std;

class Test
{
private:
    float l, b, h;
public:
    void GetAddress()
    {
        cout<<"\nAddress of object using this pointer: "<<this;
    }

};

int main()
{
    Test T;
    T.GetAddress();

    cout<<"\nAddress of object directly: "<<&T ;
    return 0;
}

/*
in this example, 'this' prints memory address in member function getAddress() same as memory address printed by address of calling object(i.e. here &b in main()). So, this in member function represents calling object.

The ' this' pointer is used as a pointer ot the calss object instance by the member function .The address of the class instance ispassed as an implicit parameter to the member functins. It is a cmmon knowledge that C++ keeps only one copy of each  member function andseparate memory for each data membbers for all of their instance . Thus single copy of member function is used by various instances or objects of a class. then we may think if only a single copy of each method exists, and it's used by multiple objects, how are the proper data members accessed and updated. The compiler uses te 'this' pointer to reference the data members of as particular object.

the pointer 'this' acts as an implicit argument to all member functions . in addition to the explicit parameters in their argument lists, every class member function (i.e method receives an additional hidden parameter, 'this' pointer. The 'this' pointer addresses object on which the method was called. Therefore, inside a member function 'this' may be used to refer to the invoking object.


*/

