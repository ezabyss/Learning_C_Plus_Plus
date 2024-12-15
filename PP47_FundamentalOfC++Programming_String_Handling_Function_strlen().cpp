
//WAP to find out length of string input from using library function strlen()

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char Name[30];
    cout<<"\n Enter Name : ";
    cin.getline(Name,30);
    int n ;
    n = strlen(Name);
    cout<<"\n Your  Name : "<< Name;
    cout<<"\n Number of Length is : "<<n;
    return 0;
}
