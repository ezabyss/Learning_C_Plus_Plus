//Nested Namespace
/*

A nested namespace is defined as namespace within another namespace. The outer namespace is known as outer namespace and other namespace defined inside outer namespace is known as inner namespace. A namespace definition can be nested within another namespace definition as follow :

namespace Outer_Namespace
{
    namespace Innter_Namespace
        {
        }
}
*/
//WAP as you choice to illustrate the use of nested namespace

#include <iostream>

using namespace std;
//My Way
/*
namespace Outer_ns
{
    int n = 10;
    namespace Inner_ns
    {
        int n = 20;
    }
}

int main()
{
    int n = 5;
    cout<<"\n the value of n in main()    : "<< n;
    cout<<"\n The value of n in outer_ns  : "<< Outer_ns::n;

    cout<<"\n The value of n in inner_ns  : "<< Outer_ns::Inner_ns::n;


    return 0;
}
*/
namespace OuterNamespace
{
    int num = 10;
    namespace InnerNamespace
    {
        void Display()
        {
            cout<<" The Value of num is : "<< num;
        }
    }
}

int main()
{

    OuterNamespace::InnerNamespace::Display();
    return  0;
}
/*
In this  example, the Display() function is defined within scope of InnerNamespace namespace which is defined again within outer namespace OuterNamespace. So, the function Display() i called using scope resolution operator i.e. OuterNamespace::InnerNamespace::Display(); to indicate the display() function defined within scope of InnerNamespace of OuterNamespace.
*/
