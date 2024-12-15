
//WAP to illustrate the use of function template with multiple parameters.

#include <iostream>
#include <conio.h>

using namespace std;

template <class T1, class T2, class T3>

void CalculateSize(T1 a, T2 b, T3 c)
{
    cout<<"\n Memory size of first parameter : "<<sizeof(a) <<" bytes ";
    cout<<"\n Memory size of second parameter : "<<sizeof(b) <<" bytes ";
    cout<<"\n Memory size of third parameter  : "<< sizeof(c) <<" bytes ";

}

int main()
{

    CalculateSize(10,56.67,'r');

    return 0;

    /*
    In this example, the function CalculateSize() takes three generic parameters. We can pass any type of parameters in function call as it takes template type parameters. Here, wwew are passing integer value for first template type T1, double value for second template T2 and character value for third template T3. Thus sizeof operator gives number of memory bytes 2, 8 and 1 for int, double and char variable. Here, we can CalculateSize('r',10,56.67); are also valid function calls.

    [Note : By default, fractional values are treated as double in C++. Thus in above function call, the value 67.67 is oftype double, not float.};
    */
}
