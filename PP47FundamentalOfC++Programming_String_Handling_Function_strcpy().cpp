
//WAP to copy One string to another

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char Dstr[20] ;
    char Sstr[] = " Aditaya  ";
    cout<<"\n Before Copying : ";
    cout<<"\n Dstr : "<< Dstr;
    cout<<"\n Sstr : "<< Sstr;

    strcpy(Dstr,Sstr);
    cout<<"\n\n After Copying : ";
    cout<<"\n Dstr : "<< Dstr;
    cout<<"\n Sstr : "<< Sstr;

    return 0;
}
