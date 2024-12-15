//WAP to overload function template with ordinary function

#include <iostream>

using namespace std;
template <class DT>
DT Large(DT a, DT b) //Works for any Type;
{
    if(a>b)
        return a;
    else
        return b;
}

int Large(int a, int b) //works for integer type
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int a,b;
    float m,n;
    cout<<"\n Enter Two integer: ";
    cin>>a>>b;
    cout<<"\n Enter Two Fractional Number : ";
    cin>>m>>n;
    cout<<"\n Larger Among a,b   : "<<Large(a,b);
    cout<<"\n Larger Among a,b   : "<<Large(m,n);
    return 0;
}
/*
In this example, the normal function is called for function call MAX(a,b) as it matches exactly. But template function is called for another function call Max(m,n). This can also be understood by message within each function in above program.
*/
