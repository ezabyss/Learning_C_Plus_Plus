
//WAP to illustrate the characteristics of a constructor.

#include <iostream>
using namespace std;

class Name
{
private:
    char name[5];
public:
    Name() // constructor
    {
        cout <<endl<<" Enter Your Name: ";
        cin >> name;
        cout <<" Hello "<< name << " Nice to Meet you!!";
    }
};

class Test
{
public:
    Test() //constructor
    {
        cout<<"\nHello I'm from constructor. of Test Class ";
    }
};
int main()
{
    Name N1, N2, N3;

    Test T1, T2, T3;

    return 0;

}
/*
In this example, when three objects N1, N2, N3 are defined, the constructor Name() is automatically called. as there are three objects, it is called three times and so it will show the message "I am from constructor" three times.
*/








/*
Introduction:

A constructor is a special member function of a class which initializes object of its. A class can have one or more data members(i.e. also called class variables). When an object of a class is created, separate copy of data members of the class for each object are created. initially, data members of the created object, we used normal member function in previous chapter. But we can use constructor to assign some initial value to data members of the object instead of normal member function. the constructor is special member function due to following its characteristics.

1. the name of constructor(i.e. name of member function) must be same as that of its class name.
2. it has no return type(not even void).
3. It is invoked/ accessed automatically when an object of the class is created(i.e. no need to call these special member function explicitly like normal member functions).

4. It should be defined in public or protected section of the class.

5. The constructor can't be inherited, though a derived class can call base constructors.

6. It cant be virtual.

7. An object with a constructor(or destructor cannot be used as a member of a union.

8.  The address of constructor can't be referred in program

9. The constructor makes implicit calls to the operator new and delete when dynamic memory allocation is required.

*/
