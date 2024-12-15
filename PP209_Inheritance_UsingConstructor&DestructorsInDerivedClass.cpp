/*
When an object of a derived class is instantiated, the base class constructor along with derived class constructor must be called to initialize base class members of derived class as a derived class inherits its base class members. When an object of a derived class is created, the program first calls the constructor for base class, then the constructor for the derived class. It is the same way as first floor is constructed before second floor. If this doesn't happen, the data members of base class may be uninitialized when object of derived class is created. If any base class doesn't contain a constructor or contains constructor with no arguments, then it not necessary to have constructor in derived class. But it is mandatory to have constructor in derived class, whether it has data members to be initialized or not, if there is constructor with arguments written in base class. the constructor in derived class must supply initial data  to base class constructor. Thus, when object of base class is created. We supply values at the time of the object creation to initialize data members of the base class and when object of derived class is created, we must supply the values for derived as well as base class. A base-class initializer can be provided in the derived class constructor to call base class constructor implicitly..
*/

#include<iostream>
using namespace std;

/*
class Figure
{
protected:
    float dim1, dim2;
public:
    Figure(float dim1, float dim2)
    {
        this->dim1 = dim1;
        this->dim2 = dim2;
    }
    void DisplayData()
    {
        cout<<"\n 1st Dimension : "<< dim1;
        cout<<"\n 2nd Dimension : "<< dim2;
    }
};
class Rectangle:public Figure
{

public:
    float getarea()
    {
        return (dim1 * dim2);
    }
};

int main()
{
    Figure F(5,3);
    Rectangle r;
    r.DisplayData();


    cout<<"\n Area of rectangle is : "<< r.getarea();

    return 0;
    /*
    In this example, the base class Figure has constructor with two arguments but derived class doesn't have any constructor. When object of derived class is created, no values are passed as it has no constructor. The member function  DisplayData() of base class can be accessed  using derived class. The data members: dim1 and dim2 have not been initialized. this is the liability of derived class to initialize data members of base class. So, the derived class Rectangle must have one constructor which receives argument/Values to pass to base class and initialized its data members.

    When a derived class object is created, we supply initial values that are required by all the class together.The constructor of the derived class receives entire list of values as its in derived class. The general form of defining derived class constructor.
    Derived_class_constructor (Argument1, Argument2,... Argument n)
    {
    //body of derived constructor

    The header line of derived class constructor function contains two parts separated by a colon(:) . The first part providess declaration of the arguments that are passed to the derived constructor and the second part is claling base class constructor which supplies arguments in base class and the remaining arguments are used initialize data member of derived class. this, above program can be corrected as following .\
}
*/

//WAP to pass arguments/data to base class constructor from derived class constructor.

class Figure
{
protected:
    float dimension1, dimension2;
public:
    Figure(float dim1, float dim2)
    {
        dimension1 = dim1;
        dimension2 = dim2;
    }
    void DisplayData()
    {
        cout<<"\n 1st Dimension : "<<dimension1;
        cout<<"\n 2nd Dimension : "<<dimension2;
    }
};

class Rectangle:public Figure
{

public:
    Rectangle(float a, float b):Figure(a,b)
    {
    }
    float getarea()
    {
        return (dimension1 * dimension2);
    }
};

int main()
{
    float a,b;
    cout<<"\n Enter Dimension 1 : ";
    cin >> a;
    cout<<"\n Enter Dimension 2 : ";
    cin >> b;
    Rectangle R(a,b);
    R.DisplayData();
    cout<<"\n Area of rectangle is :"<< R.getarea();\

    return 0;
}
