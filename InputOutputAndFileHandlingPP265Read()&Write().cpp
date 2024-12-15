//Reading/writing from/ to file using read() and write() function
/*

The functions write() and read() handle the data in binary format i.e. the values are stored in the disk file in the same format in which they are stored in internal memory. These functions are used using following syntax:

infile.read((char *) & V, sizeof(V);//for reading from file.
outfile.write((char *) & V, sizeof(V); //for writing on file.

here, first argument is address of variable V and second is length of that variable in bytes. These two member functions can be used for reading & writing a class object.
*/

//WAP to create a class named Student with data members: name, rollNO & percent. read record of a student using object of the class and write information to a file named student.txt

#include <iostream>
#include <fstream>
using namespace std;
class Student
{
    char name[20];
    int rollNo;
    float percent;
public:
    void ReadData()
    {
        cout<<"\n enter Name : ";
        cin >> name;
        cout<<"\n Enter Roll : ";
        cin>> rollNo;
        cout<<"\n Enter Percent : ";
        cin>> percent;
    }

};
int main()
{

    Student st;

    st.ReadData();
    ofstream fout("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\student.txt");

    fout.write((char* ) &st,sizeof(st));

    cout<<"\n File has been created successfully.. see student.txt file ";
    return 0;
}
