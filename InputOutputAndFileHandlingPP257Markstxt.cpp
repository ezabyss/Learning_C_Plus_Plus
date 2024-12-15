//WAP to read name, roll no and marks in five subject of student and store the information in a file named marks.txt

#include <iostream>
#include <fstream>

using namespace std;

//From Book
int main()
{
    char name[30];
    int rollNo,phy,chem,math,nepali,bio;

    ofstream wr("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Marks.txt");

    cout<<endl<<"\n Enter Name of Student : ";
    cin >> name;

    cout<<"\n Enter rollNo of the student : ";
    cin >> rollNo;

    cout<<"\n Enter Marks in five subjects in order : ";
    cin>>phy>>chem>>math>>nepali>>bio;

    cout<<"\n Writing to file : " ;
    wr<<name<<endl<<rollNo<<endl;
    wr<<phy<<endl<<chem<<endl<<math<<endl<<nepali<<endl<<bio;

    wr.close();

    cout<<"\n File written successfully!~ ";

    return 0;
}
//My Way
/*
int main()
{
    fstream out("A:\Programming Task\StartingC\StartingC++\FTB\Files\Marks.txt",ios::out);
    //or ofstream out("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Marks.txt",ios::out);

    char name[20];
    int roll;
    float marks[5];
    cout<<"\n Enter Name : ";
    cin.getline(name,20);

    cout<<"\n Enter roll : ";
    cin >> roll;

    cout<<"\n Enter marks : "<<endl;

    for(int i = 0; i<5;i++)
    {
        cout<<" Subject "<< i+1 << " : ";
        cin>> marks[i];
    }

    out<<" Name  : "<< name <<endl;
    out<<" Roll  : "<< roll<<endl;
    out<<" Marks : "<<endl;
    for(int i=0;i<5;i++)
    {
        out<<"\n Subject "<<i+1 <<" : "<< marks[i];
    }
    out.close();
    cout<<"\n Data Written Successfully ...................... ";
    return 0;
}
/*
Note: See marks.txt file in c:\
*/

