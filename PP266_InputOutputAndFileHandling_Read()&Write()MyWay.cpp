//WAP yourself to read & write from file in class
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
class Artist
{
    char Name[30];
    int Age;
    int Rank;
public:
    void ReadArtist()
    {

        cout<<"\n Enter correct Data : ";
        cin.get();  // This was used to skips buffer (i.e \n hitting 1 in the option.
        cout<<"\n Name  : ";

        //cin>>Name;
        cin.getline(Name,30);
        cout<<"\n Age   : ";
        cin>>Age;
        cout<<"\n Rank  : ";
        cin>>Rank;
    }
    void DisplayArtist()
    {
        cout<<"\n Name   : "<< Name;
        cout<<"\n Age    : "<< Age;
        cout<<"\n Rank   : "<< Rank;
    }
};
int main()
{
    Artist Art;

    cout<<"\n Press: \n\t 1) Write \n\t 2) Read  \n >> ";
    int key;
    cin>> key;

    cin.clear();
    if(key == 1)
    {
        Art.ReadArtist();

        ofstream wr("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Artist.txt");

        wr.write((char *) &Art, sizeof(Art));
        cout<<"\n Given Data has been written to File : Artist.txt ";


    }
    else
    {
        ifstream rd("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Artist.txt");
        rd.read((char *) &Art, sizeof(Art));

        cout<<"\n The Data of File is : ";

        Art.DisplayArtist();

    }

    _getch();

    return 0;
}
