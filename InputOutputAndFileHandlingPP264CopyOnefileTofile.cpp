//WAP to copy the content of one file to another. Read name of source file. and destination file from user.

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
    char sname[20],dname[20], ch;
    cout<<"\n Enter Source file name :  ";
    cin>>sname;
    cout<<"\n Enter Destination file name : ";
    cin >>dname;

    ofstream outFile("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\dname");
    ifstream inFile("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\sname");

    if(inFile.bad())
    {
        cout<<"\n Error in Opening source File . ";
        exit(1);
    }
    inFile.get(ch);
    while (inFile.eof()==0)
    {
        outFile.put(ch);
        inFile.get(ch);
    }

    cout<<sname <<" File has been copied to " << dname;

    return 0;
}
