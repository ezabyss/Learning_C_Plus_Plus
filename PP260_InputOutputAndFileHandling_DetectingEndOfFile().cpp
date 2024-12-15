//We can either use an object of ifstream class which returns 0 on an end of file or we can use eof() which is member function of the ios class. The function eof() returns a non-zero value on reaching the end of the file and zero otherwise
/*
//1) An object of ifstream class.

    Let us consider, fin is object of class ifstream, then the following code detects end of file

    while(fin) // stops when fin becomes zero;
    {
        //code to read content of file when not end of file;
    }
*/

//WAP to read the entire content of file. Use object of ifstream class to detect end of the file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int data;
    ifstream fin;
    fin.open("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\welcome.txt");

    fin>>data;

    while(fin)
    {
        cout<<data<<endl;
        fin>>data;
    }
    fin.close();

    return 0;
}
//Here, fin returns 0 if any error occurs in the file operation including end of ile condition. the loop is executed until the end of file and the program displays the entire content of the file marks.txt
