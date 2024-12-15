//eof() function of ios class e.g.
        /*
            while(fin.eof() == 0)
            {
            //code to read content of file when not end of file
            }
    fin.eof() returns 1 or non zero if the end of file condition is encountered and zero otherwise.
        */

//WAP to read entire content of a file. Use eof() to detect the end of the file.)

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int data;
    ifstream fin;

    fin.open("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\marks.txt");
    fin>>data;

    while(fin.eof() == 0)
    {
        cout<<data<<endl;
        fin>>data;
    }
    fin.close();
    return 0;
}
