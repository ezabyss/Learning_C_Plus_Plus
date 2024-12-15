//WAP to create class Figure with dim1 and dim2 as data members and constructors to initialize its data. Create as derived class called triangle  and define a member function Area() in it to calculate the area of triangle. Create another derived class called Rectangle and define a member function Area() to calculate the area of rectangle. Implement this program using the run time polymorphism.

#include <iostream>
using namespace std;

class Figure
{
protected:
    float dim1, dim2;
public:
    Figure(float a, float b)
    {
        dim1 = a;
        dim2 = b;
    }
    virtual float Area()
    {
        return 0.0;
    }
};
class Rectangle : public Figure
{
public:
    Rectangle(float length, float breadth): Figure(length,breadth)
    {

    }
    float Area()
    {
        return (dim1 * dim2);
    }
};

class Triangle: public Figure
{
public:
    Triangle(float height, float base): Figure(height , base)
    {

    }
    float Area()
    {
        return (dim1 * dim2 ) / 2;
    }
};

int main()
{
    Figure *f;
    Rectangle rect(100.5, 7.0);
    Triangle tri(10.5,5.60);

    float area_rect,area_tri;

    f = &rect;
    area_rect = f->Area(); //Area() of Rectangle is called
    //The base class pointer can point derived class object: tri

    f = &tri;
    //area_tri= ((Triangle*) f)->Area(); //Area() of Triangle is called // here Type casting base pointer to derived class pointer

    area_tri = f->Area(); // It will give 0 if virtual is not used in base class Area();

    cout<<"\nArea of Rectangle : "<< area_rect << endl;
    cout<<"\nArea of Triangle  : "<< area_tri<<endl;

    return 0;
}
/*
In above example, both derived classes Rectangle and Triangle contain member function: Area() with same name and same sginature but different definition(i.e function body). As we know that the base class pinter can pont object of derivecd calsses, the base class pointer f can point to object rect as well as tri. The function call f->Are(); is ame in two places in aboveexample. but different functions are called on the basis of content of base cals ponter f. Initially, object of class Rectangle(i.e rect) has been pointed by base class pointer, thus the function call f->Area(); gives area of rectangle. Then the objct of class Triangle(i.e tri has been pointerd by base class pointer f. Thus, the function call f->area(); gives area of triangle. the use of same function call at different places produces different result at run time. Thus, it provides concept of polymorphism.

In this example, if the member function Area(0 in base class is not defined as virtual, then base class pointer f always call abse class version of the Area() method resulting zero value
*

;
*/
