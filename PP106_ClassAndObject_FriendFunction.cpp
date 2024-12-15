//WAP to illustrate the use of friend function

#include <iostream>

using namespace std;
//BookWay
class Circle
{
private:
    float r;
public:
    void GetData()
    {
        cout<<"\n Enter r : ";
        cin >> r;
    }
    friend void Area(Circle);

};
void Area(Circle cir)
{
    float area;
    area = 3.14 * cir.r * cir.r ;
    cout<< "\n Area Of Circle is : "<<area;
}
int main()
{
    Circle c;
    c.GetData();

    Area(c);
    return 0;
}
//My Way
/*
class Box
{
private:
    int l,b;
public:
    void GetValue()
    {
        cout<<"\n Enter length : ";
        cin >> l;
        cout<<"\n Enter Breadth : ";
        cin >> b;
    }
    friend void Sum(Box);
};
void Sum(Box b)
{
    float sum=0;
    sum = b.l + b.b;
    cout<<"\n Sum : " << sum;
}

int main()
{
    Box b1;
    b1.GetValue();
    Sum(b1);
    return 0;
}
*/
