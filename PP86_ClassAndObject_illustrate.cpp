//Create a structure named student that has name, roll, marks and remarks as members. Assume appropriate types and size of member. WAP using structure to read and display the data the data entered by the user.

#include <iostream>
#include <iomanip>
using namespace std;
//Book Way
int main()
{
    struct student
    {
        char name[20];
        int roll;
        float marks;
        char remark;
    };
    struct student s;
    cout<<"\n Enter Name   : ";
    cin >> s.name;
    cout<<"\n Enter Roll   : ";
    cin >> s.roll;
    cout<<"\n Enter Marks  : ";
    cin >> s.marks;
    cout<<"\n Enter Remark : ";
    cin>> s.remark;

    cout<<endl<<"\n The student's Information is : ";

    cout<< "\n name"<<setw(10)<<"  Roll"<<setw(10)<<"  Marks"<<setw(10)<<"  Remarks";
    cout<<"\n ----------------------------------------------------------"<<endl;
    cout<<setw(5)<<s.name<<setw(8)<<s.roll<<setw(10)<<s.marks<<setw(10)<<s.remark;


    return 0;
}
//My Way
/*
int main()
{
    struct student
    {
        char name[20];
        int  roll;
        float marks;
        char remarks;
    }st;
    //student st;
    cout<<"\n Enter Name : ";
    cin>> st.name;
    cout<<"\n Roll : ";
    cin>> st.roll;
    cout<<"\n marks : ";
    cin>> st.marks;
    cout<<"\n Remarks (p/f) : ";
    cin>> st.remarks;

    cout<<"\n Name    : "<< st.name;
    cout<<"\n Roll    : "<< st.roll;
    cout<<"\n Marks   : "<< st.marks;
    cout<<"\n Remarks : "<< st.remarks;


    return 0;
}
*/
