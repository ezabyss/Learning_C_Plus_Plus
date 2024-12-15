//WAP to illustrate the use of default constructor
#include <iostream>
using namespace std;
class Box
{
private:
    float l,b,h;
public:
    void DisplayMembers()
    {
        cout<<"\n Length  : "<<l;
        cout<<"\n Breadth : "<<b;
        cout<<"\n Height  : "<<h;
    }
    float GetVolume()
    {
        return l*b*h;
    }
};
int main()
{
    float vol;
    Box b;
    b.DisplayMembers();
    vol = b.GetVolume();
    cout<<"\n The Volume of Box is : "<<vol;
    return 0;
}
/*
>> In this example, there is neither member function nor constructor to assign data members of object b. If there
*/
