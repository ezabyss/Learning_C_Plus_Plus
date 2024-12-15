//WAP of Your chice to illustrate the use of friend function.

#include <iostream>
using namespace std;

class Circle
{

private:
    float rad;
public:
    void GetValue()
    {
        cout<<"\n Enter Radius: ";
        cin >> rad;
    }
    friend void Area(Circle);
};

void Area(Circle C)
{
    float a;
    a = 3.14 * C.rad * C.rad;
    cout << "\n Area is: "<< a;

}


int main()
{
    Circle Cir;
    Cir.GetValue();

    Area(Cir);


    return 0;
}









/*
A friend function is a function that can access private members of a class even though it is not a member of that class. In all other regards, the friend function is just like a normal function. A friend function may or may not be a member of another class. To declare a friend function, we use the friend keyword in front of the prototype of the function that we wish to make a friend of the class. It does not matter whether we declare the friend function in the private or public section of the class.
As discussed in the earlier section, when a member is declared as private inside a class, then it is not accessible from outside the class. A function that is not a member of same class or an external class will not be able to access the private member of the class But a programmer may have a situation where he or she would need to access private data from non-member functions and external class. for handling such cases, the concept of friend functions is useful tool.


*/

/*
In this example, the function Area() is not member function of class circle Generally, the prvate members of a class(i.e. rad in this case) can't be accessed by non member functions or external code. Although Area() is not member function, this fuunction is defined as friend of the class Circle. So, this function can access private members of the class Circle also. As Area() is not member function of class Circle, it can't be called using object of the class using dot operator. It is called directly as normal function without using dot operator.

Characterstics of Friend function:

The keyword friend is writter only in the function declaration  of the friend function and not in the function definition

A friend function is not in the scope of the class in which it has been declared as friend.

It can be declared in public or private part without affecting its meaning.

Usually, it has objects as arguments. It is possible to declare a function as friend in any number of class.

A friend fucntion even though it is not a member function, would have the rights to access the private members of the class.

It can't be called using the object of a class. the friend function is INvoked/ called directly as normal functon without the use of an object.

Generally, the friend function has objects as its arguemnts.

Member function of one class can be friend function of another class. In such case the member function is declared as friend using the scope resolution operator.

class XYZ
{
    int function();
}
class ABC
{
friend int XYZ::Function();
};
