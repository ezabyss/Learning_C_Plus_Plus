//WAP to illustrate strrev() function.

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[20];
    cout<<"\n Enter Name: ";
    cin >> name;
    char revname[20];
    strcpy(revname,name);
    strrev(revname);

    cout<<"\n Original Name : "<<name;
    cout<<"\n Reverse  Name : "<<revname;

    return 0;
}
