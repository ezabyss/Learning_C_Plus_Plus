//Precision()
/*
The default precision of float type numbers is sex. But we can specify the number of digits to be displayed after decimal point(i.e. precision of the number) while printing the floating point number. The precision can be set using member function precision() it is invoked using object cout of ios class.

    cout.precision(d);
    where d is the number of digits to the right of the decimal point.
*/
//WAP to display only two digits after decimal point in float.
#include <iostream>
using namespace std;
//My Way
/*
int main()
{

    float n;
    cout<<"\n Enter Floating number(having tails ):";
    cin>>n;
    cout.precision(2);
    cout<<n;

    return 0;
}
*/
//BookWay

int main()
{
    float num = 45.678, n = 45.5423;
    cout<<"\n Before Precision :";
    cout<<"\n Num : "<<num;
    cout<<"\n n  : "<< n;

    cout.precision(1);
    cout<<"\n After Precision(1) : ";

    cout<<"\n\t Num : "<<num;
    cout<<"\n\t n : "<<n;

    cout.precision(2);
    cout<<"\n\n After Precision(2) : ";

    cout<<"\n\t Num : "<<num;
    cout<<"\n\t n : "<<n;

    cout.precision(3);
    cout<<"\n\n After Precision(3) : ";

    cout<<"\n\t Num : "<<num;
    cout<<"\n\t n : "<<n;

    cout.precision(4);
    cout<<"\n\n After Precision(4) : ";

    cout<<"\n\t Num : "<<num;
    cout<<"\n\t n : "<<n;

    cout.precision(5);
    cout<<"\n\n After Precision(5) : ";

    cout<<"\n\t Num : "<<num;
    cout<<"\n\t n : "<<n;

    return 0;
}
/*
In this example, the precision has been set as two. Thus, the number 45.678 is rounded to 45.68 and 45.5423 to 45.54(i.e. nearest two digits).
*/
