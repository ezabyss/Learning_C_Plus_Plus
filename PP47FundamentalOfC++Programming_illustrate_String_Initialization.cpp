//WAP to illustrate string initialization

#include <iostream>
using namespace std;

int main()
{
    char Name[] = " Abhishek Hamal ";

    int i = 0;
    while(Name[i] != '\0')
    {
        cout<<" "<<Name[i];
        i++;
    }

    return 0;
}
