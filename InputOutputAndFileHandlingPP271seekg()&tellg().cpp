//WAP to illustrate the use of tell() and seekg() function
#include <iostream>
#include <fstream>

using namespace std;

//MyWay

int main()
{
    int pos;

    ifstream in("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Artist.txt");

    pos = in.tellg();
    cout<<"\n The Position of Get pointer : "<< pos;

    in.seekg(10,ios::beg);
    cout<<"\n\n in.seekg(10,ios::beg) : ";

    pos = in.tellg();
    cout<<"\n The Position of Get pointer : "<< pos;

    in.seekg(20,ios::beg);
    cout<<"\n\n in.seekg(20,ios::beg) : ";
    pos = in.tellg();

    cout<<"\n The Position of Get pointer : "<< pos;

    in.seekg(-10,ios::cur);
    cout<<"\n\n in.seekg(-10,ios::cur) : ";
    pos = in.tellg();
    cout<<"\n The Position of Get pointer : "<< pos;

    in.seekg(20,ios::cur);
    cout<<"\n\n in.seekg(20,ios::cur)  : " ;
    pos = in.tellg();
    cout<<"\n The Position of Get Pointer : "<< pos;

    in.seekg(0,ios::end);
    cout<<"\n\n in.seekg(0,ios::end)";
    pos = in.tellg();
    cout<<"\n the Position of Get Pointer : "<< pos;

    in.seekg(-10,ios::end);
    cout<<"\n\n in.seekg(-10,ios::end) : ";
    pos = in.tellg();
    cout<<"\n The Position of Get Pointer : "<< pos;




    return 0;
}

//BookWay
/*
int main()
{

    int pos;

    ifstream in("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Artist.txt");

    pos = in.tellg();

    cout<<"\n The position of the get pointer is : "<<pos;

    in.seekg(10,ios::beg);

    pos = in.tellg();
    cout<<"\n Now The Position of the get pointer is : "<< pos;

    return 0;

}
*/
