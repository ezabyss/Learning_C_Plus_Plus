//WAP to copy content of one string to another without using string related library functions.

#include<iostream>

using namespace std;

int main()
{
    char str1[] = "Hello";
    char str2[15] = "";
    int i;
    int len=1;
    while(str1[len] != '\0')
    {
        len++;
    }
    cout<<"\n Length of String 1 : "<<len;

    for(i=0;i<len;i++)
    {
        str2[i]=str1[i];
    }
    cout<<"\n Str1 : "<< str1;
    cout<<"\n Str2 : "<< str2;
    return 0;
}


/*
//Yo Tarika ley lasta ma thorai Garbage throw garxa;
int main()
{
    char str1[]= "Hello";
    char str2[15] // Yesto garepaxi last word paxi garbage dekhaudainw.

    int i = 0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    cout<<"\n Str1 : "<< str1;
    cout<<"\n Str2 : "<< str2;

    //strcpy(str2,str1); -> yo use garnw paiyenw.

    return 0;

}
*/
