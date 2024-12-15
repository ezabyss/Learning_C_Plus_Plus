//WAP to illustrate the use of pointer within class as its member.

#include <iostream>

using namespace std;
//Book Way

class Marks
{
    float *ptr;
    int num;
    char name[20];
public:
    void NoSubject()
    {
        cout<<"\n Enter Number of Subject : ";
        cin >> num;
    }
    void ReadData()
    {
        cout<<"\n Enter Name : ";
        cin.get();
        cin.getline(name,20);

        ptr = new float[num];
        for(int i =0; i < num;i++)
        {
            cout<<"\n Subject "<<i+1<<" : ";
            cin>>*(ptr+i);

        }
    }
    void Display()
    {
        cout<<"\n Name : " << name;
        float sum,per;
        for(int i =0;i<num;i++)
        {
            cout<<"\n Subject : "<<i+1 <<" : "<< *(ptr + i);
            sum += *(ptr +i);
        }
        per = sum/num;
        cout<<"\n The Percentage is : "<< per;
        delete []ptr;
    }
};
int main()
{
    Marks m;
    m.NoSubject();
    m.ReadData();
    m.Display();
    return 0;
}
//My Way
/*
class marks
{
private:
    int n; //number of student.
    float sum;
    float *mrks;
    float avg;
public:
    void ReadData()
    {
        cout<<"\n Enter Number of student : ";
        cin>>n;
        mrks = new float[n];
        for(int i=0;i<n;i++)
        {
            cout<<"\n Enter Marks for Student "<<i+1 << " : ";
            cin>>*(mrks+i);
            sum += *(mrks+i);
        }
        avg = sum / n;

    }
    void display()
    {
        cout<<"\n The Sum of Marks of Total Student : "<< sum;
        cout<<"\n Average is : "<<avg;
    }
};

int main()
{
    marks m;
    m.ReadData();
    m.display();

    return 0;
}
*/
