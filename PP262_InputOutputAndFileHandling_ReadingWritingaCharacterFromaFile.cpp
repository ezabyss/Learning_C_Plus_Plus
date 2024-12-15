//A Single character can be read from a file using get() number function of istream class and written to the file using put() member function of ostream class.
/*
a) get()
        The get() member function is used to read an alphanumeric character from a file.
        syntax:
                stream_object.get(character);
b) put()
        The put() member function is used to write a character to a specified file or an output stream.
        syntax:
                stream_object.put(character);

*/
//WAP to read a file name from user and read its content using get() function.

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    char filename[20], ch;
    cout<<"\n Enter File name : ";
    cin>> filename;

    ifstream inFile("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\filename");

    if(inFile.bad())
    {
        cout<<"\n Error in opening file.... ";
        _getch();
        exit(1);
    }
    cout<<"\n The content from the file "<< filename <<" is  : "<<endl;

    while(inFile.eof() == 0)
    {
        inFile.get(ch);
        cout<<ch;

    }
    return 0;
}
