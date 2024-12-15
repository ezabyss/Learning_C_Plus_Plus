//Create a class Polygon with data members: dimension1 and dimension2 and a member function: ReadDimension to read data members. Derive two classes Rectangle and Triangle from Polygon class with appropriate member function to calculate area of each rectangle and triangle

#include <iostream>

using namespace std;
//MyWay :- KoHoYo
/*
class Polygon
{
protected:
    float dimension1 ,dimension2;
public:
    void ReadDimension()
    {
        cout<<"\n Enter Dimension1 : ";
        cin >> dimension1;
        cout<<"\n Enter Dimension2 : ";
        cin >> dimension2;
    }
    void DisplayDimension()
    {
        cout<<"\n Dimension1 : "<< dimension1;
        cout<<"\n Dimension2 : "<< dimension2;
    }
};
class Rectangle:public Polygon
{
    float area;
public:
    void Rectangle_Area()
    {
        area = 2 * (dimension1 + dimension2);  // using 2(l+b) formula
    }
    void Display()
    {
        cout<<"\n\n Area of Rectangle : "<< area;
    }
};
class Triangle : public Polygon
{
    float area;
public:
    float Triangle_Area()
    {
        area = 0.2 * (dimension1 + dimension2 ); //when you write 1/2 is throws zero
        return area;
    }
};

int main()
{
    Rectangle r;
    cout<<"\n Enter Dimensions of Rectangle : ";
    r.ReadDimension();

    Triangle t;
    cout<<"\n Enter Dimensions of Triangle: ";
    t.ReadDimension();

    cout<<"\n\n ************** Area of Rectangle ************************ ";
    r.DisplayDimension();
    r.Rectangle_Area();
    r.Display();

    cout<<"\n\n********* Area of Triangle ******************* ";
    float area;
    t.DisplayDimension();
    area = t.Triangle_Area();
    cout<<"\n The area of Triangle is : " << area;

    return 0;
}
*/

//BookWay
class Polygon
{
protected:
    int dim1, dim2;
public:
    void ReadDim()
    {
        cout<<"\n Enter two Dimension of Polygon : ";
        cin >> dim1 >> dim2;
    }
};
class Rectangle : public Polygon
{
public:
    float Area()
    {
        return dim1 * dim2;
    }
};
class Triangle: public Polygon
{
public:
    float Area()
    {
        return 0.5 * dim1 * dim2;
    }
};
int main()
{
    Rectangle r;
    Triangle t;

    cout<<"\n Reading data for Rectangle ................... "<<endl;
    r.ReadDim();
    cout<<"\n Area of Rectangle : "<< r.Area();

    cout<<"\n\n Reading data for Triangle ..................... "<<endl;
    t.ReadDim();
    cout<<"\n Area of Triangle  : "<< t.Area();


    return 0;
}
