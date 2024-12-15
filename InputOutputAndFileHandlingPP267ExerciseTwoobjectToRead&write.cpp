//WAP to write an object of a class to a file and read information from the file using another object of the same class to display record in screen.

#include <iostream>
#include <fstream>


using namespace std;

//My Way

class Artist
{
    char Name[30];
    int Age, Rank;
public:
    void GetArtist()
    {

        cout<<"\n Enter Following Data : ";

        cout<<"\n Name       : ";
        cin.getline(Name,30);

        cout<<"\n Enter Age  : ";
        cin>>Age;

        cout<<"\n Enter Rank : ";
        cin>>Rank;
    }

    void DisplayArtist()
    {
        cout<<"\n Name : "<< Name;
        cout<<"\n Age  : "<< Age;
        cout<<"\n Rank : "<< Rank;
    }
};

int main()
{
    Artist Ar, Aw; // Artist Read, Artist write

    fstream inout("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Artist.txt",ios :: in | ios :: out);



    Ar.GetArtist();

    inout.write((char *) &Aw,sizeof(Aw));


    cout<<"\n The Data of File is : \n";

    inout.read((char *) &Ar,sizeof(Ar));

    Ar.DisplayArtist();





    return 0;
}

//Book-Way
/*
class Student
{
private:
    char name[50];
    int rollNo;
    float percent;
public:
    void ReadData()
    {
        cout<<" Name : ";
        cin>> name;
        cout<<" Roll No : ";
        cin>> rollNo;
        cout<<" Percentage : ";
        cin>> percent;

    }
    void DisplayData()
    {
        cout<<endl<<" Name : "<<name;
        cout<<endl<<"Roll No : "<< rollNo;
        cout<<endl<<"Percentage : "<< percent;
    }


};

int main()
{
    Student str,stw;

    fstream inout("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\student.txt ",ios::in | ios::out);

    stw.ReadData();

    inout.write((char *) & stw, sizeof(stw));

    cout<<"\n ************************************** \n";

    cout<<endl<<" The data from file is : ";
    inout.seekg(0,ios::beg);
    inout.read((char*)&str, sizeof(str));
    str.DisplayData();

    return 0;
}
*/
