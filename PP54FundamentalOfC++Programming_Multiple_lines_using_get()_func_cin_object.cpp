//WAP to read multiple lines of string from user and display on screen

#include <iostream>
using namespace std;

int main()
{

    char Strings[50];
    cout<<"\n Enter Strings : ";
    cin.getline(Strings,50,'#');
    cout<<"\n You Entered. "<<Strings;
    return 0;
}
