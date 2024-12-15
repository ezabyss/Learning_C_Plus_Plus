
//fill()
/*
when field width is used larger than the actual number of characters present in data item, the necessary spaces are added in front of data item. But we can replace blank space by other character using member function fill();

syntax>> cout.fill(character);

where character represents the character which is used for filling the unused portion
*/

//WAP to  use fill() function to display '*' character in output when number of characters is less than actual specified field width.
#include <iostream>
using namespace std;
//My Way
/*
int main()
{
    char name[30];
    cout<<"\n Enter Name : ";
    cin.getline(name,30);

    cout<<"\n Name : ";
    cout.width(15);
    cout.fill('*');
    cout<<name;

    return 0;
}
*/
int main()
{
    int num1 = 45;
    float num2 = 56.123454;

    cout.fill('*');
    cout<<"\n num1 : ";
    cout.width(8);
    cout<<num1;

    cout<<"\n num2 : ";
    cout.width(20);
    cout<<num2;
    return 0;
}
