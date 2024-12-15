//WAP  to illustrate the use of pointer within class as its member.


#include <iostream>
using namespace std;

class Marks
{
private:
    int num;
    char name[20];

    float * ptr;

public:
    void NoSubjects()
    {
        cout <<  " Enter Number of subjects: ";
        cin >> num;
    }
    void ReadData(); // function prototype;
    void Display(); // function prototype;
};

void Marks::ReadData() // function definition
{
    cout << " \n Enter Student Name: ";
    cin >> name;

    cout << " \n Enter Marks of " << num << " Subjects. ";

    ptr = new float[num]; //Creating dynamic memory allocation;

    for(int i=0; i<num ;i++)
    {
        cout <<endl<<" Enter Marks of subject " << i+1 << ":\t";
        cin >> *(ptr+i);
    }
}

void Marks::Display() // function definition
{
    float sum = 0, per;
    for(int i=0; i<num;i++)
        sum += *(ptr+i);

    per =sum/num;

    cout << endl << "\nYour data is : "<<endl<<"Name :"<<name;
    cout<< " \nThe Percentage is : "<< per;
    delete []ptr ;
}

int main()
{

    Marks m;
    m.NoSubjects();
    m.ReadData();
    m.Display();


    return 0;
}
