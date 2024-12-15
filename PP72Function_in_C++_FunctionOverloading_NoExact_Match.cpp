//WAP to illustrate type conversion in the case of function overloading if data type not matched in function call with any version of overloaded functions.

#include <iostream>
using namespace std;
//Book Way
float sum(float x, float y, float z, float b)
{
    return (x+y+z+b);
}
int sum(int x, int y)
{
    return x +y;
}
int sum(int x, int y, int z)
{
    return (x+y+z);
}
int main()
{

    cout<<"\n The Sum of two integer number : "<< sum(10,55);
    cout<<"\n The Sum of two chars          : "<< sum('a','b');
    cout<<"\n The Sum of 3 integer number   : "<<sum(3,7,10);
    cout<<"\n The Sum of 3 Floating number  : "<< sum(15.5,17.7,18.9);

    cout<<"\n\n The sum of 4 integer number : "<< sum(1,2,3,4);
    return 0;
}
//Here, there is no exact match for function call: sum('A','B'). The char is promoted to int. So, the nearest function int sum(int, int) 8is called and it adds ASCII values of characters 'A' and 'B'

//myWay
/*
int add(int,int);
int main()
{
    float sum;
    sum = add(13.33, 14.44);
    cout<<"\n Sum is : "<<sum;

    return 0;
}
int add(int a, int b)
{
    return (a+b);
}
*/
