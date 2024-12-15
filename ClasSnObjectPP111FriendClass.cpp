//WAP which has two claesses, one friend of another.

#include <iostream>
using namespace std;
class ABC  //Friend becoming class must be declared first
{
private:
        float a,b;
public:
    void Get()
    {
        cout<<"\nEnter value for a: ";
        cin >> a;
        cout<<"\nEnter value for b: ";
        cin >> b;
    }
    friend class XYZ;
};
class XYZ
{
public:
    void Display(ABC A)
    {
        cout<<"\n The Value of a : "<<A.a;
        cout<<"\n The Value of b : "<<A.b;
    }
    void Sum(ABC A)
    {
        cout<<"\n The sum is : "<<A.a+ A.b;
    }
};

int main()
{
    ABC A;
    XYZ X;

    A.Get();
    X.Display(A);
    X.Sum(A);

    return 0;
}

/*
friend Class:
A class can also be declred as friend of some other class When a class ABC declares another class XYZ as its friend, then friend becoming class(here XYZ must be frist declared or defined(forward decaration or class prototype). In other words, a class can be declared as friend class o other such that all the member function of one  class are friend function of later class. Two classes can be defined such they are friend of each other.


                                                                                                                                                In this example, class ABC is defined as friend class of class xYZ. So every member of class ABC can access every members of class XYZ including private members. Here, the member functions Display() and sum() of class ABC are suing private member a and b of class XYZ.
*/
