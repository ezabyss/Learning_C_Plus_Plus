//WAP to overload function templates

#include <iostream>

using namespace std;

template <class DT>
DT Max(DT a, DT b)
{
    if(a>b)
        return a;
    else
        return b;
}

template <class DT>

DT Max(DT a, DT b, DT c)
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;

}
int main()
{
    int a,b,c;
    cout<<"\n Enter a, b, c : ";
    cin>>a>>b>>c;
    cout<<"\n The Max Between a & b    : " << Max(a,b);
    cout<<"\n The Max Between a, b & c : " << Max(a,b,c);

    return 0;
}
/*
A template function can also be overloaded by ordinary functions. In this case, the compiler gives priority to ordinary function with exact match. But if the best match is with template function than ordinary function, it will prefer the template function.

*/
