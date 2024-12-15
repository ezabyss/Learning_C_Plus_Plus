//WAP to illustrate the use of passing array to a function.

#include <iostream>

using namespace std;

void fun(int num[])
{
    /*
    num[0] = 1;
    num[1] = 2;
    num[2] = 3;
    num[3] = 4;
    num[4] = 5;
   */
    for(int i = 0;i<5;i++)
    {
    num[i] *= 10;
    }
    //
}
int main()
{
    int number[5] = {1,2,3,4,5};
    cout<<"\n\n Before Passing : ";
    cout<<"\n\t Number in Array : ";

    for(int i =0;i<5;i++)
    {
        cout<<" "<< number[i];
    }

    fun(number);
    cout<<"\n\n After Passing : ";
    cout<<"\n\t Numbers in array : ";
    for(int i =0;i<5;i++)
    {
        //cout<<"\n  number["<<i<<"] : " << number[i];
        cout<<number[i]<<" ";
    }


    return 0;
}
