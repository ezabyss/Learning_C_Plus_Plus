//WAP to read number of students and then marks of each student. Display  entered marks and their average. Use Dynamic Memory memory allocation to reserve memory to store marks of each student.

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float *p,avg,sum;
    int n,i;
    cout<<"\n How Many Students are there ? ";
    cin>> n;
    p = new float[n];
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter Marks Of Student "<<i+1 <<" : ";
        cin>> *(p+i);
        sum += *(p+i);
    }
    cout<<"\n Marks : ";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<< *(p+i);
    }
    avg = sum/n;
    cout<<"\n Average is : "<< avg;
    delete []p;


    return 0;
}
