//getline() and write() function
/*
The getline() function reads a whole line of text that ends with a newline character (return/enter key). This function can be invoked by using the object cin as follows :
      cin.getline(sring_variable, size);

      This function getline() reads character and assigns into variable string_variable. The reading process is terminated as soon as either the newline character '\n' is encountered or size-1 character are read(whichever occurs first). The newline character is read but not saved. Instead, it is replaced by the null character.

      char name[30];
      cin.getline(name,20);
    Thus, extraction operator(i.e >>) with cin object doesn't support the white space, but getline() support the white spaces of the input stream.
*/
/*
Similarly, write() function displays an entire line and has the following form:
cout.write(string, size);

The first argument string represents the name of the string to
be displayed and the second argument size indicates the number of character to be displayed. It is important to understand that it does not stop displaying the character automatically when the null character is encountered. if the size is greater than the size of string, then it displays beyond the bound of the string.

The getline() function can also be used to read multiple lines until some delimiter is encountered.
*/
// WAP to read multi-word input from user using getline()  and write() function.

#include <iostream>
#include <string.h>
using namespace std;
/*
int main()
{
    char name[30];
    cout<<"\n Enter your full name : ";
    cin.getline(name,30);

    cout<<"\n Name : ";
    cout.write(name,30); // if the size is greater than the size of string, then it displays beyond the bound of the string.
}
*/
/* WAP in c++ to display following pattern

    W
    WE
    WEL
    WELC
    WELCO
    WELCOM
    WELCOME
*/

int main()
{
    char txt[] = "WELCOME";
    int len;
    len = strlen(txt);

    for(int i = 0; i<=len ;i++)
    {
        cout.write(txt,i);
        cout<<endl;
    }
    /*
    int i = 0;
    while(i <= len)
    {
        cout.write(txt,i);
        cout<<endl;
        i++;
    }
    */

    return 0;
}
