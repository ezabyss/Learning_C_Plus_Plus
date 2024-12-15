//The copy constructor is a constructor which creates an object as a copy of an existing object of same class. In other words, the copy constructor is used create an object by initializing it with an object of the same class,which has been created previously. The argument of such a constructor is a reference to an object of the same type as is being constructed. The copy constructor is used to initialize one object from another of the same type.

//WAP which contains a class named Box with appropriate data members and function members. initialize an object of the class with parameterized constructor and copy this object into another object using copy constructor.

#include<iostream>

using namespace std;

class Box
{
    float l,b,h;
public:
    Box()
    {
        cout <<"\nEnter length , breadth , height: ";
        cin >>l>>b>>h;
    }
    Box(Box &B1)
    {
        l = B1.l;
        b = B1.b;
        h = B1.h;
    }

    void Display()
    {
        cout <<"Length: "<<l<<endl;
        cout <<"Breadth: "<<b<<endl;
        cout <<"Height: "<<h<<endl;
    };
    void Volume()
    {
        cout<<"\nVolume: "<<(l*b*h);
    }
};

int main()
{
    Box B1;
    Box B2(B1);
    cout<<".....for First object: B1......:";
    B1.Display();
    B1.Volume();
    cout<<".....for Second object: B2......:";
    B2.Display();
    B2.Volume();

    return 0;
}

    /*
    In this example the parameterized constructor is called when and object b1 is created. the data members for object b1 are taken from the user.. When other object is created in statement: box B2(b1); the copy constructor is called. the object b1 is copied to object b2. thus. the member function Volume() gives the same value for both object; B1,B2;
    */
