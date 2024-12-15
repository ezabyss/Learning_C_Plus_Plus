//WAP to find reverse of a string without using string related library.

#include <iostream>
using namespace std;

int main()
{
    char sto[20],str[20];
    int len, i =0,j=0;
    cout<<"\n Enter a string : ";
    cin>>sto;

    while(sto[i] = '\0')
    {

        i++;
    }
    len =i;

    for(i=len-1;i>=0;i--,j++)
    {
        str[j] = sto[i];
    }

    str[j] = '\0';

    cout<<" The Reversed string is : " << str;


    return 0;
}
/*

int main()
{
    char str[20];
    char strrev[20];

    cout<<"\n Enter String : ";
    cin>> str;

    int len, i= 0,j=0;

    while(str[i]!= '\0')
    {
        i++;
    }
    len = i;

    for(i=len;i>=0;i--,j++)
    {
        strrev[j] = str[i];
    }
    strrev[j] = '\0';

    cout<<"\n String         : "<< str;
    cout<<"\n Reverse String : "<< strrev;

    return 0;
}
*/
