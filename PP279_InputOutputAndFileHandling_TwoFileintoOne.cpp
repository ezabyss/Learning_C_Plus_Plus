//WAP to Combine two file into one and print it.

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;
int main()
{
    char fname[15],sname[15],cname[15],ch;
    cout<<"\n Enter First file Name : ";
    cin>> fname;
    cout<<"\n Enter Second file Name : ";
    cin>>sname;
    cout<<"\n Enter New Name for Combined File : ";
    cin>>cname;
    ifstream ffile(fname);
    ifstream sfile(sname);
    fstream cfile(cname,ios::out);

    if(ffile.bad())
    {
        cout<<"\n Error in Opening file... ";
        exit(1);

        if(sfile.bad())
        {
            cout<<"\n Error in second file.. ";
            exit(1);
        }

        ffile.get(ch);
        while(ffile.eof()==0)
        {
            cfile.put(ch);
            ffile.get(ch);
        }

        sfile.get(ch);
        while(sfile.eof()==0)
        {
            cfile.put(ch);
            sfile.get(ch);
        }
    }
    cfile.close();
    cout<<fname <<" file has been merged into "<<sname;
    cout<<"\n The new content of file is : ";
    cfile.open(cname, ios::in);

    cfile.get(ch);
    while(cfile.eof() == 0)
    {
        cfile.get(ch);
        cout<<ch;
    }

    ffile.close();
    sfile.close();
    cfile.close();

    return 0;
}
