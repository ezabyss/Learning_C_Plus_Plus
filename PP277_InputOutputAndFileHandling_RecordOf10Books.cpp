//WAP that writes the 10 records of Book into file "books.txt"then display only the 4th record stored in that file.

// All mistakes are at reading Detail
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Book
{
    char name[20];
    int id;
    int nop;
    float price;
public:
    void ReadData()
    {
        cout<<"\n Enter Name            : ";
        cin>> name;
        cout<<"\n Enter Book Id         : ";
        cin >> id;
        cout<<"\n Enter Number Of Pages : ";
        cin>>nop;
        cout<<"\n Enter Price           : ";
        cin>> price;
    }
    void Display()
    {
        cout<<"\n Name             : "<< name;
        cout<<"\n ID               : "<< id;
        cout<<"\n Number Of Pages  : "<< nop;
        cout<<"\n Price            : "<< price;
    }
};

int main()
{
    Book b[10],ob;
    int i;
    cout<<"\n Reading Record of Book................ ";
    for(i=0;i<4;i++)
        b[i].ReadData();

    fstream file("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Books.txt",ios::binary | ios::in | ios:: out| ios::ate);

    for(i=0;i<4;i++)
        file.write((char*) &b[i],sizeof(b[i]));


    cout<<endl<<"\n The fourth Record is : ";
    file.clear();
    file.seekg(0,ios::beg);
    i = 0;
    while(file.read((char*)&ob,sizeof(ob))>0)
    {
        i++;
        if(i==2)
        {
            ob.Display();
            break;
        }
    }
    file.close();

    return 0;
}
