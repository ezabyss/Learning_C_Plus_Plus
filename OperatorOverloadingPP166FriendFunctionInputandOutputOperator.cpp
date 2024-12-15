//WAP to overload input(>>) and output(<<) operator using friend function.

#include<iostream>
using namespace std;

class Distance
{
private:
    int feet, inch;
public:
    Distance()
    {
        feet = inch = 0;
    }
    friend void operator>>(istream &, Distance &);
    friend void operator>>(ostream &, Distance &);
};

void operator>>(istream &in, Distance &dis)
{
    cout<<endl<<"Enter data members of the object:";
    cout<<endl<<"feet: ";
    in>>dis.feet;
    cout<<"Inch: ";
    in>>dis.inch;
}

void operator<<(ostream &out, Distance &dis)
{
    cout<<endl<<"The data members of the object: ";
    out<<dis.feet<<"\' ";
    out<<dis.inch<<"\" ";
}

int main()
{
    Distance D;
    cin >> D;  // same as operator>>(cin,d)
    cout<< D; // same as operator<<(cout,d)

    return 0;
}

/*
In this example, the input and output operators have been overloaded. The operator>> is being used for reading object of Distance class. Similarly, the operator<< is being used to display object of Distance class. te statement: cin>>d; is interpreted as operator>>(cin,d) and here, both arguments have been passed as reference. As arguments cin and d are passed by reference, the original objects in main function will change when they are changed (i.e. data is loaded in this case within operator function. Similarly, the statement: cout<<d; is interpreted as operator<<(cout,d). Only first argument has been passed as reference and the second argument has been passed by value. Here, the second argument has not been passed by reference because operator function operator<<() doesn't change its value within it, it only displays values of its data members.
*/
