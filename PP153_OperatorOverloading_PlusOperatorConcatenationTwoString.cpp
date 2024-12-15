//WAP to overload binary plus operator for concatenation of two string.

#include <iostream>
#include <string.h>

using namespace std;
class String
{
private:
    char str[50];
public:

    String()
    {
        strcpy(str,""); // Just to make string holder clear// not necessary;
    }
    void ReadString()
    {
        cin.getline(str,50);
    }
    void Display()
    {
        cout<< str;
    }
    String operator+(String Str2)
    {
        String temp;
        strcpy(temp.str,str); //here only str is value which invoked this function i.e Str1;
        strcat(temp.str," "); //Just to make Space;
        strcat(temp.str,Str2.str);
        return temp;
    }
    /* Very Basic Way;
    void operator+(String str2)
    {
        char Final[40];
        strcpy(Final,str);
        strcat(Final," ");
        strcat(Final,str2.str);
        cout<<"\nThe concatenate string: "<< Final;

    }
    */
};

int main()
{
    String Str1,Str2, Str3;

    cout<<"\nEnter String 1st: ";
    Str1.ReadString();

    cout<<"\nEnter String 2nd: ";
    Str2.ReadString();

    Str3 = Str1 + Str2; //FinalString = Str1.operator+(Str2);

    cout<<"\n The Final concatenated Strings is: ";

    Str3.Display();


    return 0;
}







//According to book:- i don't know why they make it so complicated;
/*
class String
{
    char st[30];
public:
    String()
    {
        strcpy(st,"");
    }
    String(char data[])
    {
        strcpy(st,data);
    }
    void Display()
    {
        cout<<st;
    }
    String operator+(String str)
    {
        String temp;
        strcpy(temp.st,st);
        strcat(temp.st,str.st);
        return temp;
    }
};

int main()
{
    String S1("\nWelcome ");
    String S2(" To my College. ");
    String S3;

    S3 = S1 + S2;
    cout<<"S1=";S1.Display();
    cout<<"\nS2="; S2.Display();
    cout<<"\nS3="; S3.Display();

    return 0;


     return 0;
}
*/
