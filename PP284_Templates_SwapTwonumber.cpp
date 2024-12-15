//WAP to swap two numbers of integer types and float types using single function. Use function template.

#include <iostream>
#include<conio.h>
#include <iomanip>
using namespace std;
template <class DT>

void Swap(DT *A,DT *B)
{
    DT Temp;
    Temp = *A;
    *A = *B;
    *B = Temp;
}

int main()
{
    int ia, ib;
    float fa, fb;
    char  ca, cb;
    cout<<"\n Enter Two Integer Number : ";
    cin>>ia>>ib;
    cout<<"\n Enter Two float   Number : ";
    cin>>fa>>fb;

    cout<<"\n Enter Two Character : ";
    cin>> ca>>cb;

    cout<<"\n ** The Values Before Swapping : ";
    cout<<"\n Integers a : "<<ia <<setw(6)<<" b : "<<ib;
    cout<<"\n float a : "<<fa <<setw(6)<<" b : "<<fb;
    cout<<"\n character a : "<<ca <<setw(6)<<" b : "<<cb;

    Swap(&ia,&ib);
    Swap(&fa,&fb);
    Swap(&ca,&cb);
    cout<<"\n ** The Values After Swapping : ";
    cout<<"\n Integers a : "<<ia <<setw(6)<<" b : "<<ib;
    cout<<"\n float a : "<<fa <<setw(6)<<" b : "<<fb;
    cout<<"\n character a : "<<ca <<setw(6)<<" b : "<<cb;


    return 0;

    /*
        In this example, the single function Swap() has been used to change two values of type integer, float and character. Thus, The function Swap() defined in this example acts as generic function which can be used to change two values of any type When two integers are passed as arguments, Then template type represents int. Similarly. When two integers are passed as arguments, then template type represents int. Similarly, when two float or character values are passed ar arguments, Then template type represents
        float or char type.
    */
}



//MYWAY
/*
template<class DT>

DT Swap(DT *a , DT *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

template <class DT>
void Display(DT a, DT b)
{
    cout<<"\n a : "<< a;
    cout<<"\n b : "<< b;
}
int main()
{
    float fa = 933.3784, fb = 4873.339;
    int   ia = 3784 , ib = 933;

    cout<<"\n Before Swapping integer : ";
    Display(ia,ib);
    cout<<"\n Before Swapping float   : ";
    Display(fa,fb);

    Swap(&ia,&ib);
    Swap(&fa,&fb);

    cout<<"\n After Swapping integer  : ";
    Display(ia,ib);
    cout<<"\n After Swapping integer  : ";
    Display(fa,fb);

🥰
    return 0;

}

*/
