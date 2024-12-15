//WAP to illustrate the use of seekp() and tellp() function.

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int pos;
    ofstream out("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\marks.txt");

    pos = out.tellp();
    cout<<"\n The Position of The Put Pointer : "<<pos ;

    out.seekp(0,ios::beg);
    cout<<"\n\n out.seekp(0,ios::beg) :";
    pos = out.tellp();
    cout<<"\n The Position of the put pointer : "<<pos;

    out.seekp(10,ios::beg);
    cout<<"\n\n out.seekp(10,ios::beg) :";
    pos = out.tellp();
    cout<<"\n The Position of the put pointer : "<<pos;

    out.seekp(-5,ios::cur);
    cout<<"\n\n out.seekp(-5,ios::cur) : ";
    pos = out.tellp();
    cout<<"\n The Position of the put pointer : "<<pos;

    out.seekp(20,ios::cur);
    cout<<"\n\n out.seekp(20,ios::cur) : ";
    pos = out.tellp();
    cout<<"\n The Position of the put pointer : "<<pos;

    out.seekp(0,ios::end);
    cout<<"\n\n out.seekp(0,ios::end)  : ";
    pos = out.tellp();
    cout<<"\n The Position of the put pointer : "<< pos;

    out.seekp(-5,ios::end);
    cout<<"\n\n out.seekp(-5,ios::end) : ";
    pos = out.tellp();
    cout<<"\n The Position of the put pointer : "<<pos;






    return 0;
}
