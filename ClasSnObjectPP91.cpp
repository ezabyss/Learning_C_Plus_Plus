
//WAP to define a class with its data member and function member. Use object of this class in main program to access its members.

#include <iostream>

using namespace std;

class Rectangle
{
private:
    float len, br;
public:
    void getdata(float l, float b)
    {
        len = l;
        br  = b;
        cout << " length : " << len;
        cout << " \n Breadth : "<< br;
    }

    void calculate_area()
    {
        cout <<"\n The area is: "<< (len * br);
    }

};

int main()
{
    Rectangle r1,r2; // defining two objects


    cout <<endl<< "Value at object r1: "<<endl;
    r1.getdata(10,20);
    r1.calculate_area();

    cout <<endl<<endl << "Value at object r2: "<<endl;
    r2.getdata(15,10);
    r2.calculate_area();





    //These cannot be access because len and br are private data.

    //cout << " \nValue in object r1 : " <<" \nlength : " << r1.len << " Breadth : " << r1.br;
    //cout << " \n Value in object r2 : " <<"\nLength : " << r2.len << " Breadth : " << r2.br;

    return 0;
}
