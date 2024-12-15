//WAP to define a class Box with data members: l, b & h Define appropriate member functions to read its data members and calculate volume of a box.

#include <iostream>

using namespace std;
//Using constructor
class Box
{
    float len,br,height;
public:
    Box(float l,float b,float h)
    {
        len = l;
        br = b;
        height = h;
        cout<<" \n Inside constructor: Volume is: "<<(l*b*h);
    }
    void GetVolume()
    {
        cout <<" \n Volume is: "<< (len*br*height);
    }
};

int main()
{
    Box B(5,5,5);

    B.GetVolume();

    return 0;
    /*
    In this example, special member function: Box(float len, float br, float he), called constructor, is being used instead o fREadData() member function as in previous program. The constructor has arguments which are used to initialize data members of the data members of the class. When object ob is defined is main() function, the constructor is automatically called(i.e. no need to call this function as in previous program). So, we are passing values 10, t.t and 3.5 as arguments in constructor.
    */

}

//Using Normal function
/*
class Box
{
private:
    float l,b,h;
public:
    void GetData()
    {
        cout <<"\n Enter l, b, b: ";
        cin >>l>>b>>h;
    }
    void Volume()
    {
        cout <<"\n Volume is : "<< l * b * h;
    }
};

int main()
{
    Box B;
    B.GetData();
    B.Volume();

    return 0;
    /*In this example, there are three data members: l,b and h of a class Box. when an object ob is defined using class box, its data members don't get any values. The use of member function ReadData() with supplied paramemters assigns values to data members l, b n h. We can also  read these data values from user within function ReadData() with above supplied values. here, the member function Volume is called is being used to supply values in data members of the object. WE can use constructor instead of member function to initialize data members
}
*/
