//WAP to illustrate the use of strcmp() function.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char Name1[15], Name2[15];

    cout<<"\n Enter Name1 : ";
    cin >> Name1;
    cout<<"\n Enter Name2 : ";
    cin >> Name2;
    int diff;
    diff = strcmp(Name1,Name2);
    if(diff > 0)
        cout<< Name1 <<" Greater than "<<Name2<<" By value "<<diff;
    else if(diff<0)
        cout<< Name2 <<" Greater than "<< Name1 <<" By value "<<diff;
    else
        cout<<"\n Both Are same. ";


    return 0;
}
