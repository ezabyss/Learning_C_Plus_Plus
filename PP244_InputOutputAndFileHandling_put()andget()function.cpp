//put() and get() functions
/*
The class istream defines member function get() and ostream defines put() for single character I/O operations. The get() function assigns the input character ( from keyboard, data file etc) to its argument and put() function is used to output a character (i.e. in screen or data file).
Syntax:
        cin.get(char_variable);
        cout.put(char_variable or char_constant);

*/

//WAP  to use get() function to read character from keyboard and put() function to display the character on screen;

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"\n Enter a character (using cin.get(ch) ): ";
    cin.get(ch);
    cout<<"\n Entered charactered is (using cout.put(ch) : ";
    cout.put(ch);

    return 0;
}
