//WAP to illustrate The Return by reference;
#include <iostream>
using namespace std;

double vals[] = {10.1,10.2,10.3,10.5};

double& setValues(int i)
{
    return vals[i]; // return a reference to the ith element
}
int main()
{
    cout<<"\n Values Before Change "<< endl;
    for(int i= 0;i<5; i++)
    {
        cout<<" Vals ["<<i<<"] "<<vals[i] <<endl;
    }
    setValues(1) = 100.6; //change 2nd element
    setValues(3) = 150.7; // change 4th element.
    cout<<"\n Values after change : ";
    for(int i=0;i<5;i++)
    {
        cout<<"\n Vals ["<<i<<"] : "<<vals[i] <<endl;
    }
    return 0;
}
