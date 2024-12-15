//WAP to overload a unary minus operator(i.e -);

#include <iostream>
//Book Way
using namespace std;
class Complex
{
    float real,img;
public:
    void Read()
        {
            cout<<"\n Enter Real  : ";
            cin >> real;
            cout<<"\n Enter Image : ";
            cin >> img;
        }
    void Display()
        {
            cout<<"\n Real : "<< real;
            cout<<"\n Img  : "<< img;
        }

    void operator-()
    {
        real *= -1;
        img  *= -1;
    }
};
int main()
{
    Complex C1;
    cout<<"\n Enter Value for C1 : ";
    C1.Read();

    C1.Display();
    -C1; //Same as C1.operator-();

    cout<<"\n After unary minus : ";
    C1.Display();
    return 0;
}
//My Way
/*
using namespace std;
class ABC
{
        float a,b;
    public:
        void Get()
        {
            cout<<"\n Enter a & b: ";
            cin>>a>>b;
        }
        void Display()
        {
            cout<<"\n a : "<< a;
            cout<<"\n b : "<< b;
        }
        void operator -()
        {
            a *= -1;
            b *= -1;
        }

};
int main()
{
    ABC A1,A2;
    cout<<"\n Enter Value for A1 : ";
    A1.Get();
    cout<<"\n Enter Value for A2 : ";
    A2.Get();
    cout<<"\n A1 : ";
    A1.Display();
    cout<<"\n A2 : ";
    A2.Display();

    -A1;
    -A2;
    cout<<"\n Now Value at object A1 : ";
    A1.Display();

    cout<<"\n Now Value at object A2 : ";
    A2.Display();

    return 0;

}
*/
