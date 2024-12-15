//WAP to overload binary plus operator for concatenation of two strings;

#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char str[20]="";
public:
    void Get()
    {
        cin >>str;
    }
    void Display()
    {
        cout<< str;
    }
    String operator+(String str2)
    {
        String temp;
        strcpy(temp.str,str);
        strcat(temp.str," ");
        strcat(temp.str,str2.str);

        return temp;
    }
};
int main()
{
    String Fname,Lname, Fullname;
    cout<<"\n Enter First name : ";
    Fname.Get();
    cout<<"\n Enter Last  name : ";
    Lname.Get();
    cout<<"\n First Name  : ";
    Fname.Display();
    cout<<"\n Second Name : ";
    Lname.Display();

    Fullname = Fname + Lname; //same as fullstr = str1.operator+(str2);
    cout<<"\n Fullname is: ";
    Fullname.Display();

    return 0;
}
