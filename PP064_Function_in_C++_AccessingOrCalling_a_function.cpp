//Define a function greater() to find the greatest number among two numbers. Write a program that uses this function to find the greatest number among three numbers.

#include <iostream>
using namespace std;

//BookWay

int Greater(int x, int y)
{
    if (x>y)
        return x;
    else
        return y;
}

int main()
{
    int a,b,c,d,e;
    cout<<"\n Enter 3 number : ";
    cin>> a>>b>>c;
    d = Greater(a,b);
    e = Greater(b,c);

    cout<<"\n Greater Between "<< a <<" & "<< b << " : " << d;
    cout<<"\n Greater Between "<< b <<" & "<< c << " : " << e;
    return 0;
}
//MY Way
/*
int Greater(int a, int b)
{
    if (a>b)
        return a;
    else if(a<b)
        return b;
    else
        cout<<"\n Both are Equal. ";
        return 0;
}
int main()
{
    int a,b;
    cout<<"\n Enter a & b: ";
    cin>>a>>b;
    int G;

    G = Greater(a,b);
    cout<<"\n Greater Value is : "<< G;

    return 0;
}
*/
