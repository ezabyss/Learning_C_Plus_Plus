//WAP to read student's record from the previous program  and display in screen;

#include <iostream>
#include <fstream>

using namespace std;
class Student
{
    char name[20];
    int rollno;
    float percent;
public:
    void DisplayData()
    {
        cout<< "\n Name     : "<< name;
        cout<< "\n Roll no. : "<< rollno;
        cout<< "\n Percent  : "<< percent;
    }
};

int main()
{
    Student st;

    ifstream fin("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\student.txt");

    fin.read((char *) &st , sizeof(st));

    cout<<"\n The data of student.txt is : ";

    st.DisplayData();


    return 0;
}
