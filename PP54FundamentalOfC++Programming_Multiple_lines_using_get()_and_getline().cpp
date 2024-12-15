//WAP to rad multiple lines of string from user and display on screen

#include<iostream>
using namespace std;
int main()
{
    char fullname[20],Address[20];
    /*
    cout<<"\nEnter Name : ";
    cin.get(fullname,20);
    cout<<"\n Enter Address : ";
    cin.get(Address,20);

    cout<<"\n Name : "<<fullname<<" Address : "<<Address;
    */
    //WAP to getline() function function for reading two values in successive statements.
    cout<<"\n Enter Name : ";
    cin.getline(fullname,20);
    cout<<"\n Enter Address : ";
    cin.getline(Address,20);
    cout<<"\n Name : "<<fullname <<" Address : "<< Address;
    return 0;
}
