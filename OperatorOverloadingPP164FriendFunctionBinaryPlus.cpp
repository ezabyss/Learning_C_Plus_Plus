//overload binary plus operator(+) to evaluate following expression B= 5+A, wher B and A are object of a class Distance having members feet and inch and add 5 to each member of the object A.

#include<iostream>
using namespace std;

//My Way


class Distance
{
    int feet, inch;
public:
    void ReadDistance()
    {
        cout<<"\n Enter feet: ";
        cin >> feet;
        cout<<"\n Enter Inch: ";
        cin >> inch;
    }

    void Display()
    {
        cout<<"\n "<<feet<<" ft "<< inch << " inch ";
    }
    friend Distance operator+(int,Distance);
};

Distance operator+(int n, Distance A)
{
    Distance temp;
    temp.feet = A.feet + 5;
    temp.inch = A.inch + 5;
    if(temp.inch >= 12)
    {
        ++temp.feet;
        temp.inch -= 12;  //12 inch = 1 feet;
    }
    return temp;
}

int main()
{
    Distance A , B;

    cout<<"\n Enter Distance 1: ";
    A.ReadDistance();

    cout<<" Value At object A: ";
    A.Display();

    B = 5 + A; //Same as B = operator+(5,A);

    cout<<"\n Value At object B after Adding 5";
    B.Display();

    return 0;
}


/*
class Distance
{
private:
    int feet, inch;
public:
    Distance()
    {
        feet = inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void Display()
    {
        cout<<feet<<"\'"<<inch<<"\"";
    }
    friend Distance operator+(int, Distance );
};

Distance operator+(int n, Distance d)
{
    Distance temp;
    temp.feet = n + d.feet;
    temp.inch = n + d.inch;
    if(temp.inch>=12)
    {
        temp.inch = temp.inch-12;
        temp.feet=temp.feet+1;
    }
    return temp;
}

int main()
{
    Distance B(5,9),A;

    A = 5 + B;// same as: operator+(5,B);

    cout<<endl<<"\n The original object is: ";
    B.Display();
    cout<<endl<<"\n New object after adding t is: ";
    A.Display();

    return 0;
}
*/
