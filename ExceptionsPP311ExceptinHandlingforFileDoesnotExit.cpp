//WAP to read content of a file and use exception handling if file doesn't exist.

#include <iostream>
#include <fstream>

using namespace std;
/*
int main()
{

    char msg[] = " No Such File ";
    char data;
    ifstream fin;
    try
    {
        fin.open("c:\\tc\\bin\\linker.cpp");
        if(fin.fail())
            throw msg;
        fin>>data;
        while(fin)
        {
            cout<<data;
            fin>>data;
        }
    }
    catch(char str[])
    {
        cout<<str;
    }
    fin.close();



    return 0;
}

*/
//My Way

int main()
{
    ifstream fin;
    char data;
    char msg[] = " File Not Found ";
    try
    {
        fin.open("Ram.txt");
        if(fin.fail())
            throw msg;
        fin>>data;
        while(fin)
        {
            cout<<data;
            fin>>data;
        }
    }
    catch(char st[])
    {
        cout<< st;
    }

    return 0;
}
