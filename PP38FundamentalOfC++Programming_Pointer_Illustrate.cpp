//WAP to illustrate the use of pointer

#include <iostream>
using namespace std;

int main()
{
    char ch = 'c';
    char *ptr ;
    ptr = &ch;

    cout<<"\n Value at Char is (ch)  :\t "<< ch;
    cout<<"\n Value of ptr (ptr)     :\t "<<ptr;
    cout<<"\n Value at ptr (*ptr)    :\t "<< *ptr;

    return 0;
}
