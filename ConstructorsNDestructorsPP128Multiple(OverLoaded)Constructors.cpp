//We can define more than one constructor in a class. As the name of a constructor same as the name of a class, name of multiple constructors should be same. Overloading constructors, like overloading other normal function, is a process of defining more than one constructor for a class, each taking a different set of parameters, Different constructors allow creating of objects with desired type of values. In overloaded constructor, there are more than one constructor having same name but with different signature. When an object  of a class is created , the correct version of the constructor is called on the basis of supplied arguments.

//WAP to illustrate overloaded constructor to initialize different objects of a class.


#include<iostream>

using namespace std;
class Box
{
private:
    float l,b,h;
public:
    Box() // Constructor with no argument
    {
        l=b=h=0;
    }
    Box(float a) // Constructor with one argument
    {
        l=b=h=a;
    }
    Box(float len, float br, float he) //Constructor with three argument
    {
        l = len;
        b = br;
        h = he;
    }
    Box(Box &ob)
    {
        l = ob.l;
        b = ob.b;
        h = ob.h;
    }

    void Display()
    {
        cout<<"\nLength: " <<l;
        cout<<"\nBreadth: "<<b;
        cout<<"\nHeight: "<<h;
    }
    void Volume()
    {
        cout<<"\nVolume is: "<<(l*b*h);
    }
};
int main()
{
    Box B1;                          //this constructor calls constructor with no argument;
    cout<<"\n\n\n------------ content of object B1--------------- ";
    B1.Display();
    B1.Volume();

    Box B2(5);                       // calls constructor  with one argument;
    cout<<"\n\n\n------------ content of object B2--------------- ";
    B2.Display();
    B2.Volume();

    Box B3(5,2,3);                   //Calls constructor with three argument;
    cout<<"\n\n\n------------ content of object B3--------------- ";
    B3.Display();
    B3.Volume();

    Box B4(B3);                      //Calls Copy constructor
    cout<<"\n\n\n------------ content of object B4--------------- ";
    B4.Display();
    B4.Volume();

    Box B5(B2);
    cout<<"\n\n\n------------ content of object B5--------------- ";
    B5.Display();
    B5.Volume();

    Box B6(B1);
    cout<<"\n\n\n------------ content of object B6--------------- ";
    B6.Display();
    B6.Volume();

    cout<<"\n\n Note:- B4,B5,B6 are copy constructor & Value of object B3, B2, B1 are passed respectively\n\n";

    return 0;
}

/*
In this example, when object B1 is defined without any arguments, first version of constructor i.e. Box() is called. It initialized data members with zero. So, the member function getVolume() returns zero for object B1;

Similarly, when object B@ is defined by passing value 5 as argument, the second version of the function i.e Box(float a) is called. It initializes data member: l,band h with 5 thus the volume is 125;

when third object B# is created with three values 5,2,3 as argument the third version of the constructor i.e Box(float le, float br, float he) is called as its arguments are matched with this version. It initializes data members: l, b and h with value, 5,2,3 respectively such that volume will be 30;

While defining fourth Object B4, we are passing object as parameter. Thus, it is matched with fourth version of the constructor i.e Box(box &b2). The object b2 is copied into object b4. So it gives 125 as volume.

B5, B6 are same as  B4,
*/
