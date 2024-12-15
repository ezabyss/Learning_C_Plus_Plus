/*
friend function can be used as operator function in place of member function for overloading of operators. the only difference is the a friend function requires only one argument fro unary operators and two arguments for binary operators to be explicitly passed to it. As the friend function is non-member function of a class, it is called without object.
Therefore, there is no  object calling and all objects are passed in operator function via arguments. As a result, there is one more argument while using friend fucntion as operator function than using member function.

There are certain situations where we must use a friend function rather than a member function. In overloading of binary operator using member function, the left-hand oeprand is used to invoke the operator function and the right-hand operand is passed as an argument. Again, the left-side operand must be object of same class. thus the member function can't be used when there is operand of different type in left side. For example: let us considered there two different operands for binary operators, first operand is a built-in data type and second is object like following. A = 2 + B;

Where A a& B are objects and 2 is an integer constant. In this situation, as the first operand is not object of the class, we can't use this as calling object. Thus, friend function rather than member function is used in this case.

*/
//unary minus just change the sign
//WAP to overload a unary minus operator using friend function

#include <iostream>
#include <conio.h>

using namespace std;
//My_example

class Distance
{
    int feet, metre; // just taking random variable;
public:
    void ReadData()
    {
        cout<<" \n Enter feet : ";
        cin >> feet;
        cout<<" \n Enter metre: ";
        cin >> metre;
    }
    void Display()
    {
        cout<<"\n feet : "<<feet;
        cout<<"\n metre : "<<metre;
    }
    friend Distance operator-(Distance);
};

Distance operator-(Distance Dis)
{

    Dis.feet *= -1;
    Dis.metre *= -1;
    //Dis.Display(); // you can use if you want void return type;

    return Dis;   //This trick i used the argument as the returning object.
}

int main()
{
    Distance Dis;
    cout<<"\n Enter Data : \n";
    Dis.ReadData();

    cout<<"\n Before Unary :\n ";
    Dis.Display();

    cout<<"\n After Unary :\n";
    Dis = -Dis; //i stored the returned object's value in the same object.

    Dis.Display();


    return 0;
}

/*
In this example, the operator function has been defined as friend function. The unary minus operator requires one operand and the operand has to be passed as argument. So, we are passing one object o type Complex as argument of operator function. Here, the statement: m_comp = -comp; is interpreted as m_comp= operator-(comp), where the operator function has been called without object and comp is being passed as argument;
*/
//Book
/*
class Complex
{
    int real, img;
public:

    Complex()
    {
    real = img = 0;
    }
    Complex(int r, int r)
    {
    real = r;
    img = i;
    }
    void GetData()
    {
        cout<<"\n Enter Real Part: ";
        cin >> real;
        cout<<"\n Enter Imaginary Part: ";
        cin >> img;
    }
    void Display()
    {
        cout<<"\n Real Part : "<< real;
        cout<<"\n Imaginary Part :" << img;
    }

    friend Complex operator-(Complex);
};
Complex operator-(Complex Com)
{
    Complex temp;
    temp.real = - Com.real;
    temp.img = - Com.img;
    return temp;
    }

int main()
{
    Complex Com, m_Com;
    cout<<"\nEnter complex number: ";
    Com.GetData();

    cout<<"\n Before Unary Minus: \n";
    Com.Display();
    m_Com = -Com; //Same as m_com = operator-(Com);

    cout<<"\n After Unary Minus: \n";
    m_Com.Display();



    return 0;
}

*/
