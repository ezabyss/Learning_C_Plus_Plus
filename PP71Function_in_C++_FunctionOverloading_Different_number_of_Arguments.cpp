//WAP which has two functions with same name ,one for addition of two integers and other for addition of three integers.

#include <iostream>
using namespace std;
int Add(int a, int b)
{
    return (a+b);
}
int Add(int a, int b, int c)
{
    return (a+b+c);
}

int main()
{
    int a, b, c;
    cout<<"\n Enter Value for a , b & c : ";
    cin >> a >> b >> c;
    cout<<"\n Sum (a & b) is : "<< Add(a,b);

    cout<<"\n Sum (a & b & b) is : "<< Add(a,b,c);
    return 0;
}
