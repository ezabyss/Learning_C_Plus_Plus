//Extraction
//WAP to illustrate the use of extraction operator to get input from user.

#include <iostream>

using namespace std;
int main()
{
    int num;

    char name[20];
    cout<<"\n Enter num : ";
    cin>> num;
    cout<<"\n Enter Name : ";
    cin >> name;

    cout<<"\n You Entered  : "<<endl;
    cout<<" Num  :  " << num  <<endl;
    cout<<" Name :  "  << name  <<endl;

    return 0;
}
