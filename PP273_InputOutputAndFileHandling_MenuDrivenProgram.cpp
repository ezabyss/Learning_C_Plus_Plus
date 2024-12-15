//WA Menu drived program as following
/*

a=> add a new record
u=> Update existing record
d => Display the content of file
s => search record on the basis of roll no
x => exit from the program
*/

#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Student
{
    char name[20];
    int  rollno;
    float marks;
    char address[50];

    public:

        void ReadData()
        {
            cout<<"\n Name : ";
            cin>> name;
            cout<<"\n Roll No : ";
            cin>> rollno;
            cout<<"\n Marks : ";
            cin>>marks;
            cout<<"\n Address : ";
            cin>>address;
        }

        void DisplayData()
        {
            cout<<"\n Name    : "<<name;
            cout<<"\n Roll No : "<< rollno;
            cout<<"\n Marks   : "<<marks;
            cout<<"\n Address : "<<address;
        }
        int GetRollNo()
        {
            return rollno;
        }
};
int main()
{
    Student st;
    fstream file;
    file.open("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\Menu.txt",ios::in | ios::out | ios:: ate | ios::binary);

    char YN, option;
    int rn,isFound;
    do
    {
        cout<<"\n ************************* MENU ************************* \n";
        cout<<"\n Enter Your Option : ";
        cout<<"\n    a => Add A New Record. ";
        cout<<"\n    u => Update existing record. ";
        cout<<"\n    d => Display the content of file. ";
        cout<<"\n    s => Search Record On The Basis Of Roll No. ";
        cout<<"\n    x => Exit. \n   >>>> ";
        cin>> option;

        switch(option)
        {
        case 'a':
            cout<<"\n Adding New Record...... ";
            st.ReadData();
            file.seekp(0,ios::end);
            file.write((char *)&st,sizeof(st));
            break;

        case 'u':
            int recordNo = 0;
            cout<<endl<<"\n File is Being Modified.... ";
            cout<<endl<<"\n Enter Roll Number to be Updated: ";
            cin>>rn;
            isFound = 0;
            file.seekg(0,ios::beg);

            file.read((char *)&st,sizeof(st));
            while(!file.eof())
            {
                recordNo++;
                if(st.GetRollNo() == rn)
                {
                    cout<<endl<<" *** The Old record is: ";
                    st.DisplayData();
                    isFound = 1;
                    break;
                }
                file.read((char *) &st, sizeof(st));
            }
            if(isFound == 0)
            {
                cout<<endl<<" **** Data Not Found *** ";
                break;
            }
            file.clear();
            int location = (recordNo-1)*sizeof(st);
            file.seekp(location,ios::beg);
            cout<<endl<<"\n Enter new value to be updated : ";
            st.ReadData();
            file.write((char*)&st, sizeof(st));
            break;

        case 's':


            break;

        case 'd':
            /*
            cout<<"\n Displaying Data Of File. ";
            file.clear();
            file.seekg(0,ios::beg);
            while(file.read((char*)&st,sizeof(st))) > 0)
            {
                st.DisplayData();
                cout<<endl<<" ************************************ ";
            }

            file.clear();
            break;
            */
        case 'x':
            cout<<"\n Closing Program..... ";
            exit(0);
            break;
        default:
            cout<<"\n *** Invalid Option *** ";
            break;
        }

        cout<<"\n Do You Want To Continue (y/n) : ";
        cin>>YN;

    }while(YN == 'y');



    return 0;
}
