//WAP to illustrate the use of inheritance

#include <iostream>
using namespace std;
//Me

class Shape
{
protected:
    float width, height;
public:
   void ReadData()
   {
       cout<<"\n Enter width : " ;
       cin >> width;
       cout<<"\n Enter height : ";
       cin >> height;
   }
};

class Triangle: public Shape
{
public:
    float Area()
    {
        return (width * height)/2 ;
    }
};
class Rectangle: public Shape
{
public:
    float Area()
    {
        return (width * height) ;
    }
};

int main()
{

    Triangle Tr;
    Rectangle R;
    cout<<"\n Enter Value for Triangle : ";
    Tr.ReadData();

    cout<<"\n Enter value for Rectangle : ";
    R.ReadData();

    cout<<"\n The Area of Triangle is : "<< Tr.Area();
    cout<<"\n The Area of Rectangle is : "<< R.Area();



    return 0;
}




//Book
/*
class Shape
{
public:
    int width, height;
public:
    void ReadDimensions(int a, int b)
    {
        width = a;
        height = b;
    }
};
class Rectangle: public Shape
{
    public:
        int Area()
        {
            return (width * height);
        }
};

class Triangle: public Shape
{
public:
    int Area()
    {
        return ((width * height)/2);
    }
};

int main()
{

    Rectangle rect;
    Triangle tr;
    rect.ReadDimensions(4,2);
    tr.ReadDimensions(5,4);
    cout<<"\n Area of rectangle is : "<< rect.Area();
    cout<<"\nArea of Triangle is: "<<tr.Area();

    return 0;
}
*/
/*
In this example, class shape is defined as base class. In base class, the common members(i.e. common features ) are defined. WE assumed that every child of shape class has two dimensions: width and height and one member function ReadDimensions(). Here class Rectangle and Triangle are defined as child members of Shape class can be accessed by them also. The width and height are protected data members of base class Shape. But they are being used by member function of child classes: Rectangle and Triangle to calculate are. The   formula for calculation of area is different fro rectangle and triangle .
So, specific features are defined within child class. Again, we are suing member function ReadDimensions() of Shape class using object of Rectangle and Triangle Class in main() function.)
*/
