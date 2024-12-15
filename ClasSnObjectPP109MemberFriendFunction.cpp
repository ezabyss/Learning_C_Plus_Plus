//WAP to illustrate "member function of one class can be made friend of another class "

#include<iostream>
using namespace std;

class ExtraActivities;
class Academic
{
private:
    float Amarks;
public:
    void ReadData()
    {
        cout  <<"\n Enter Academic Marks: ";
        cin >> Amarks;
    }
    void CalculateTotal(ExtraActivities);// if You directly define the function here it will throw the error that ExtraActivities E is not complete
};

class ExtraActivities
{
private:
    float Emarks;
public:
    void ReadData()
    {
        cout<<"\nEnter ExtraActivities Marks: ";
        cin >>Emarks;
    }
    friend void Academic::CalculateTotal(ExtraActivities);
};


void Academic::CalculateTotal(ExtraActivities E)
{
    float total;
    total = Amarks + E.Emarks;
    cout<<"\nThe sum is : "<<total;
}
int main()
{
    Academic A;
    ExtraActivities E;
    A.ReadData();
    E.ReadData();

    A.CalculateTotal(E);

    return 0;
    }

    /* in this example, the function CalculateTotal() is member function of class Academic but it is friend of class ExtraActivities. So, it can access private data member of the ExtraActivities class also.))
