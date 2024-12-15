//WAP  to overload logical not(i.e. !) operator
#include <iostream>
using namespace std;

class Coordinate
{
    int x,y;
public:
    void Get()
    {
        cout<<"\n Enter X  & Y Coordinate : ";
        cin >>x>>y;
    }
    void Display()
    {
        cout<<"\n Coordinate (x,y) is ("<<x<<","<<y<<")";
    }
   int operator!()
    {
        if(x == 0 & y ==0)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Coordinate c;
    cout<<"\n Enter Coordinate for c : ";
    c.Get();

    if(!c)
    {
        c.Display();cout<<" is Origin ";
    }
    else
    {
        c.Display(); cout<<" is not Origin. ";
    }
    return 0;
}
