//WAP to use multi-level inheritance
#include<iostream>
using namespace std;
//Not Looking at book;
//Student->Examination->Result

class Student
{
protected:
    int roll;
    char name[20];
public:
    void ReadStudent()
    {
        cout<<"\n Enter roll: ";
        cin >> roll;
        cout<<"\n Enter Name: ";
        cin >> name;
    }
    void DisplayStudent()
    {
        cout<<"\n Roll : "<< roll;
        cout<<"\n Name : "<< name;
    }
};
class Examination:public Student
{
protected:
    float practical, theory;
public:
    void ReadMarks()
    {
        ReadStudent();
        cout<<"\n Enter Practical Marks: ";
        cin >> practical;
        cout<<"\n Enter Theory Marks: ";
        cin >> theory;
    }
    void DisplayMarks()
    {
        cout<<"\n Practical : "<< practical;
        cout<<"\n Theory : "<< theory;
    }
};
class Result:public Examination
{
    float total_marks;
public:
    void CalculateMarks()
    {
        total_marks = practical + theory;
    }
    void Display()
    {

        DisplayStudent();
        DisplayMarks();
        cout<<"\n Total Marks: " << total_marks;
    }
};

int main()
{
    Result R;
    R.ReadMarks();
    R.CalculateMarks();


    cout<<"\n The Record of Student is : ";
    R.Display();
    return 0;
}


//Looking at book;
/*
class Student
{
    int roll;
    char name[20];
public:
    void ReadStudent()
    {
        cout<<"\n Enter Roll no : ";
        cin >> roll;
        cout<<"\n Enter Name : ";
        cin >> name;
    }
    void DisplayStudent()
    {
        cout<<"\n Name : " << name;
        cout<<"\n Roll : " << roll;
    }
};
class Examination: public Student
{
protected:
    float subject1, subject2;
public:
    void ReadMarks()
    {
        cout<<"\n Enter Sub1 Marks :" ;
        cin >> subject1;
        cout<<"\n Enter Sub2 Marks : ";
        cin >> subject2;
    }
    void DisplayMarks()
    {
        cout<<"\n Subject1 : "<< subject1;
        cout<<"\n Subject2 : "<< subject2;
    }
};

class Result: public Examination
{
    float total;
public:
    void CalculateResult()
    {
        total = subject1 + subject2;
    }
    void DisplayResult()
    {
        cout<<"\n TotalMarks : " << total;
    }
};
int main()
{
    Result R;
    R.ReadStudent();
    R.ReadMarks();
    R.CalculateResult();

    cout<<"---- The Record of the student ----- "<< endl;
    R.DisplayStudent();
    R.DisplayMarks();
    R.DisplayResult();

    return 0;


}
*/
/*
In this example, class Student is base class.  The class examination is derived class of class Student. From derived class Examination, another class Result has been derived. Thus, there are three levels in tis example
*/
