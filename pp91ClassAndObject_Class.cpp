//WAP to define a class with its data members and function members. Use object of this class in main program to access it members


#include <iostream>
using namespace std;
//Book Way
class Rectangle
{
private:
    float len,br;
public:
    void getdata(float l, float b)
    {
        len = l;
        br  = b;
    }
    void calculate_area()
    {
        cout<<"\n The Area is : "<< (len * br);
    }
};
int main()
{
    Rectangle r1, r2;
    r1.getdata(10,20);
    r2.getdata(15,10);
    r1.calculate_area();
    r2.calculate_area();
}
//My Way
/*
class Rectangle
{
private:
    int l,b;
public:
    void Read(float l, float b)
    {
        this->l = l;
        this->b = b;
    }
    void Area()
    {
        cout<<"\n Area is : "<< 2 * (l + b);
    }
};

int main()
{
    Rectangle R;
    R.Read(55.3,99.9);
    R.Area();

    return 0;
}
*/
