//Modify function Outside the class body.

#include <iostream>
using namespace std;

//Book Way
class Box
{
private:
    float length, breadth , height;
public:
    void  ReadData(); //function prototype
    float Volume(); //function prototype
};
void Box::ReadData()
{
    cout<<"\n Enter Length , Breadth , Height : ";
    cin >>length>>breadth>>height;
}
float Box::Volume()
{
    return (length * breadth * height);
}

int main()
{
    Box b1;
    b1.ReadData();
    float vol;
    vol = b1.Volume();
    cout<<"\n Volume : "<< vol;

    return 0;
}
//MyWay
/*
class Box
{
private:
    float length,breadth,height;
public:
    void ReadData(); //function prototype
    void Volume();   //function prototype
};
void Box::ReadData()
{
    cout<<"\n Enter Length, Breadth & Height : ";
    cin >>length >> breadth >> height;
}
void Box::Volume()
{
    cout<<"\n Volume : "<< (length * breadth * height);
}

int main()
{
    Box b1;
    b1.ReadData();
    b1.Volume();

    return 0;
}
*/
