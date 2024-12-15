//Pure Virtual functions
/*
The virtual function which has no body is known as pure virtual function.
The virtual function is derived in base class and it is redefined in derived classes. The prototype of virtual function in base class and derived must be same but the definition is different. The virtual function declared inside the base class is seldom used for performing any task. It only acts as a place holder. Such functions are called "do-nothing " function. A"do-nothing " function may be defined  using syntax:

    virtual return_type function_name() = 0;
                OR
    virtual return_type function_name()
    {
    }
EG:
    virtual int Area() = 0;
    virtual void Display() = 0;
    virtual void Draw()
    {
    }

    Such functions are called pure virtual functions. Thus, a pure virtual function is a function declared in a base class that has no definition (i.e no body) relative to the base class. In such cases, the complex requires each derived class to either define the function or re-declare it as a pure virtual function. One point to be remembered is that the object can't be created from a class containing pure virtual function. Such type of class is known as ABSTRACT CLASS

*/

//WAP to use pure virtual function to implement run time polymorphism using array of pointer to base class.

#include <iostream>

using namespace std;
class Polygon
{
protected:
    float dim1, dim2;
public:
    virtual void draw() = 0;
};

class Rectangle: public Polygon
{
public:
    void draw()
    {
        cout<<"\n ...... Drawing Polygon ......\n ";
    }
};
class Triangle: public Polygon
{
public:
    void draw()
    {
        cout<<"\n ...... Drawing Triangle ......\n ";
    }
};
class Pentagon: public Polygon
{
public:
    void draw()
    {
        cout<<"\n ....... Drawing Pentagon ..... \n";
    }
};

int main()
{
    Polygon *Poly[3]; // created Pointer array
    Triangle Tri; // created Triangle object;
    Rectangle Rect;
    Pentagon Pent;

    Poly[0] = &Tri; // Base pointer points to class Triangle
    Poly[1] = &Rect; // Base pointer points to class Rectangle
    Poly[2] = &Pent; //Base pointer points to class Pentagon

    for(int i=0;i<3;i++)
        Poly[i]->draw();

    return 0;

}
/*
in this, the class polygon contains pure virtual function Draw which is redefined in derived classes. The functions in different derived classes are called using single base pointer. Here, p[] is an array of pointer to base class.. The elements of the array points different objects.
*/
