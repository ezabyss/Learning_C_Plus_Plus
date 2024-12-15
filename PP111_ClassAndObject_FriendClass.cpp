//WAP which has two classes, one friend of another

#include <iostream>
using namespace std;
//Book Way
class XYZ
{
    float a,b;
public:
    void Read()
    {
        cout<<"\n Enter Two numbers : ";
        cin>>a>>b;
    }
    friend class ABC;
};
class ABC
{
public:
    void Display(XYZ x)
    {
        cout<<"\n The first number : "<<x.a;
        cout<<"\n The Second number : "<<x.b;
    }
    float sum(XYZ x)
    {
        float s;
        s = x.a + x.b;
        return s;
    }
};
int main()
{

    XYZ x;
    ABC a;
    x.Read();
    a.Display(x);
    cout<<"\n The sum is : "<<a.sum(x);
}

//MY WAY
/*
class ABC;
class XYZ;

class ABC
{
private:
    int a,b,c;
public:
    void Read()
    {
        cout<<"\n Enter Value For A, B, C : ";
        cin >> a >> b >> c;
    }
    friend class XYZ;
};

class XYZ
{
public:
    void Display(ABC A)
    {
        cout<<"\n A : "<< A.a;
        cout<<"\n B : "<< A.b;
        cout<<"\n C : "<< A.c;
    }

    void sum(ABC A)
    {
        cout<<"\n The sum is : "<<(A.a + A.b + A.c);
    }
};

int main()
{
    ABC A;
    XYZ X;
    A.Read();
    X.Display(A);
    X.sum(A);


    return 0;
}
*/
