//WAP to illustrate "member function of one class can be made friend of another class"
#include <iostream>

using namespace std;

class Academic;
class ExtraActivities;

class Academic
{
    float Amarks;
public:
    void GetMarks()
    {
        cout<<"\n Enter Academic Marks : ";
        cin >>Amarks;
    }
    void TotalMarks(ExtraActivities);
};

class ExtraActivities
{
    float Emarks;
public:
    void GetMarks()
    {
        cout<<"\n Enter ExtraActivities Marks : ";
        cin>>Emarks;
    }
    friend void Academic::TotalMarks(ExtraActivities);
};
void Academic::TotalMarks(ExtraActivities E)
{
    float sum;
    sum = Amarks + E.Emarks;
    cout<<"\n Total Marks is : "<< sum;
}

int main()
{
    Academic A;
    ExtraActivities E;
    A.GetMarks();
    E.GetMarks();

    A.TotalMarks(E);

    return 0;
}
