//WAP to read record of 10 books with appropriate atributes from user and write to a file.


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Book
{

    char name[30],Aname[30];
    float price;
public:
    void ReadBooks()
    {
        cout<<"\n Author Name : ";
        cin.get();
        cin.getline(Aname,30);
        cout<<"\n Book Name : ";
        cin.getline(name,30);
        cout<<"\n Price  : ";
        cin>>price;
    }
    void DisplayBooks()
    {
        cout<<endl<< name;
        cout<<setw(10)<< Aname;
        cout<<setw(10)<< price;
    }
};
int main()
{
    Book B[2], Br[2];

    fstream RD("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Artist.txt",ios::binary | ios::in);
    for(int i=0; i < 2 ; i++)
    {
        B[0].ReadBooks();
        RD.write((char *) &B[i],sizeof(B[i]));
    }
    cout<<"\n Data has been written successfully.!! ";

    cout<<"\n The Data is : ";
    cout<<"\n Author Name "<<setw(20) <<" Book Name "<<setw(20) <<" Price ";

    cout<<"\n-------------------------------------------------------------\n";

    RD.seekg(0,ios::beg);
    for(int i=0;i<2;i++)
    {

        RD.read((char *) &Br[i], sizeof(Br[i]));

        Br[i].DisplayBooks();
    }



    return 0;
}
