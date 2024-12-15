/*
a. width()
        The member function width() is used to define necessary  field width for output of data item. It is same as field width in printf() function in C. Since, it is a member function of ios class, we use an object of ios class to invoke it.
        cout.width(w);

    where w is field width (number of columns). The output will be printed such that the data item will occupy w characters. If there are fewer characters in data items than w, the required number of spaces is preceded. After printing one data item, it will revert to the default.
*/
//WAP to specify field width in output text as your choice using member function width() of ios class.

#include <iostream>
using namespace std;

int main()
{
    int num1 = 45;
    float n = 56.123454;

    cout<<" num1 = ";
    cout.width(8);
    cout<<num1;
    cout<<n;
    for(int i = 0; i <= 20;i++)
    {
        cout<<"\nwidth("<<i<<" )"<<" num2  = ";
        cout.width(i);
        cout << n;
    }
    return 0;
}
/*
In this example, width() function specifies 8 as field width. But data item num1 has only two characters. Thus, it leaves 6 spaces to fulfill required field width. Similarly. before printing data item n , the field width has been set as w0. But data item n has only 9 characters. So, it leaves 11 characters and then prints actually data.

*/
