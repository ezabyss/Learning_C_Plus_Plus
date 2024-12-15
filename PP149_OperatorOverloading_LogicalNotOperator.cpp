//WAP to overload logical not(i.e !) operator

//This program check if the given coordinates are origin or not.

#include<iostream>

using namespace std;

//MY Way of doing It
class Coordinate
{
    int x,y;
public:
    Coordinate()
    {
        cout<<"\n Enter X and Y Coordinate: ";
        cin >>x >> y;
    }
    void Display()
    {
        cout<<"("<<x<<","<<y<<")";
    }
    int operator!()
    {
        if(x==0 && y==0)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Coordinate C1;

    if(!C1)                         //if (C1.operator!();
        cout<<" \n The point is origin. "<<endl;
    else
        cout<<" \n The point is not origin. "<<endl;

    cout<<" Coordinate is: ";
    C1.Display();
    return 0;
}

//From text book As it is:
/*
class Coordinate
{

    int x ,y;
public:
    Coordinate()   //I don't know why but book added this uselessly.
    {
        x = y = 0;
    }
    coordinate(int x, int y) //This one is also use less.
    {
        this->x = x;
        this->y = y;
    }
    void ReadPoint()
    {
        cout<<"\nEnter Pointer for X & Y: ";
        cin >> x >> y;
    }

    int operator!()
    {
        if(x==0 && y==0)
            return 1;
        else
            return 0;

    }
};

int main()
{
    Coordinate C1;
    C1.ReadPoint();
    if(!C1)
        cout<<"\n The Points are origin. ";
    else
        cout<<"\n the points are not origin. ";

    return 0;
}
*/
