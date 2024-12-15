//WAP to read name, roll no and marks in five subjects form a file named marks.txt Assume that data file marks.txt already exists with data.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    char name[20];
    int rollno, phy, chem, math, nepali,bio;
    float per;
    int total;

    ifstream rd("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Marks.txt");

    rd>>name>>rollno;
    rd>>phy>>chem>>math>>nepali>>bio;

    cout<<endl<<"*********************************"<<endl;
    cout<<"             MARKSHEET                 ";
    cout<<endl<<"Name : "<<name;
    cout<<"\t\t Roll No. " << rollno;
    cout<<endl<<setw(12)<<"Subject"<<setw(12)<<"Roll ";
    cout<<endl<<"-------------      -------------";
    cout<<endl<<setw(12)<<"Physics"<<setw(10)<<phy;
    cout<<endl<<setw(12)<<"Chemistry"<<setw(10)<<chem;
    cout<<endl<<setw(12)<<"Mathematics"<<setw(10)<<math;
    cout<<endl<<setw(12)<<"Nepali"<<setw(10)<<nepali;
    cout<<endl<<setw(12)<<"Biology"<<setw(10)<<bio;

    total = phy+chem+math+nepali+bio;

    per = total/7;

    cout<<endl<<"--------------------------------------";
    cout<<endl<<" Total : "<<total<<setprecision(3);
    cout<<"\n Percentage : "<< per;
    rd.close();

    return 0;
}
/* Here, the output of the above program is mark sheet of a student. The name, roll no and marks are read from a file.
*/
