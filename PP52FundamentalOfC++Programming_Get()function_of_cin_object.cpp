//Reading Embedded blanks using get() function of cin object.
//WAP to read string with space (i.e. multiple word) from user and Display it on screen.

#include <iostream>

using namespace std;

int main()
{
    char fullname[20];
    cout<<"\n Enter Full Name : ";
    cin.get(fullname,20);

    cout<<"\n your full name is : "<< fullname;

    return 0;
}
