//WAP to define a class named Box which has private data length, breadth & height and public functions ReadData() for reading data members and Volume() to calculate volume of Box. Use this class to calculate volume of a box.

#include <iostream>
using namespace std;


//Book Way
class Box
{
private:
    float length,breadth,height;
public:
    void ReadData() // Function Definition
    {
        cout<<"\n Enter length, breadth, Height : ";
        cin >>length>>breadth>>height;
    }
    float Volume() // Function definition
    {
        return (length * breadth * height);
    }
};
int main()
{
    Box b1;
    float v;
    b1.ReadData();
    v = b1.Volume();
    cout<<"\n The Volume is : "<<v;
    return 0;
}
//My Way
/*
class Box
{
private:
    float length,breadth,height;
public:
    void ReadData()
    {
        cout<<"\n Enter Length  :  ";
        cin >> length;
        cout<<"\n Enter Breadth : ";
        cin >> breadth;
        cout<<"\n Enter Height  : ";
        cin >> height;
    }
    void Volume()
    {
        cout<<"\n Volume is : "<< (length * breadth * height);
    }
};
int main()
{
    Box B1;

    cout<<"\n Enter Data For B1 : ";
    B1.ReadData();
    B1.Volume();


    return 0;
}
*/
