//WAP to compute combination of number nCr without using function.

//formula : n.c.r = n! / ( (n-r)! r! )
//factorial : for(i=0;i<=n;i++) { f *= i}

//WAP to calculate combination using function

#include <iostream>
using namespace std;
float factorial(int a)
{
    float fact = 1;
    for(int i=1;i<=a;i++)
        fact *= i;
    return fact;
}
int main()
{
    int n,r;
    cout<<"\n Enter n & r : ";
    cin>> n >> r;

    float f1,f2,f3;
    f1 = factorial(n);
    f2 = factorial(n-r);
    f3 = factorial(r);

    float comb = f1/ (f2*f3);
    cout<<"\n Combination : "<< comb;

    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"\n Enter n & r: ";
    cin>>n>>r;
    int c = n-r;

    float f1=1,f2 =1,f3 = 1;

    for(int i = 1;i<=n;i++)
        f1 *= i;
    for(int i=1;i<=c;i++) //for(int i = 1; i<=n-r;i++)
        f2 *= i;
    for(int i=1;i<=r;i++)
        f3 *= i;

    float combination;
    combination = f1 / (f2 * f3);

    cout<<"\n the combination is  : " << combination;
    return 0;
}
*/
