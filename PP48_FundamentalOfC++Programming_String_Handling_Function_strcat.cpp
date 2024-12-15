//WAP to concatenate two strings.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char First[] = "Abhishek ";
    char Last[]  = " Hamal";

    cout<<"\n First : "<< First;
    cout<<"\n Last  : "<< Last;
    strcat(First,Last);
    cout<<"\n Full Name : "<< First;
    return 0;
}
//My way
/*
int main()
{
    char First[10],Last[10];

    cout<<"\n Enter First Name : ";
    cin>>First;
    cout<<"\n Enter Last  Name : ";
    cin>>Last;
    cout<<"\n Before strcat() : ";
    cout<<"\n First "<< First;
    cout<<"\n Last  "<< Last;
    strcat(First,Last);
    cout<<"\n After Strcat : ";
    cout<<"\n First "<< First;
    cout<<"\n Last  "<< Last;



    return 0;
}
*/
