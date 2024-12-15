//WAP to concatenate two strings without using related library functions.

#include <iostream>

using namespace std;
/*
int main()
{
    char st1[] = "Hello", st2[]= " World";

    int len1,len2,i=0,j=0;

   /* cout<<"\n Enter First string : ";
    cin>>st1;
    cout<<"\n Enter Second String : ";
    cin>>st2;

    while(st1[i] != '\0')
        i++;
    len1 = i;

    i= 0;
    while(st2[i] != '\0')
        i++;
    len2 = i;

    for(i=len1;i<(len1+len2);i++,j++)
        st1[i] = st2[j];

    st1[i] = '\0';
    cout<<"\n The Concatenated String is : "<<st1;
}
*/

int main()
{

    char str1[] = "Hello ";
    char str2[] = "World ";
    int len1,len2, i=0,j=0;

    while(str1[i] != '\0')
        i++;
    len1 = i;
    i = 0;

    while(str2[i] != '\0')
        i++;
    len2 = i;

    cout<<"\n str1 : "<<str1;
    cout<<"\n str2 : "<<str2;

    for(i=len1;i<(len1+len2);i++,j++)
            str1[i] = str2[j];

    str1[i] = '\0';

    cout<<"\n Concatenated String is : "<< str1;

    return 0;
}
