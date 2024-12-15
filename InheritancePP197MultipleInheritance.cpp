//WAP as your choice to use Multiple Inheritances.

#include <iostream>

using namespace std;

//Book Way

class AcademicActivities
{
protected:
    float acd_marks;
public:
    void Read_Amarks()
    {
        cout<<"\n Enter Academic Marks : ";
        cin >> acd_marks;
    }
    void Display_Amarks()
    {
        cout<<"\n Academic Marks : " << acd_marks;
    }
};
class ExtraActivities
{
protected:
    float discipline_marks;
    float punctuality_marks;
public:
    void Read_Emarks()
    {
        cout<<"\n Enter Discipline Marks : ";
        cin >> discipline_marks;
        cout<<"\n Enter Punctuality Marks : ";
        cin >> punctuality_marks;
    }
    void Display_Emarks()
    {
        cout<<"\n Discipline Marks : " << discipline_marks;
        cout<<"\n Punctuality Marks : " << punctuality_marks;
    }
};

class Result: public ExtraActivities, public AcademicActivities
{
    float total_marks;
public:
    void calculate_marks()
    {
        total_marks = acd_marks + punctuality_marks + discipline_marks;
    }
    void Display_Sum()
    {
        Display_Amarks();
        Display_Emarks();

        cout<<"\n The Sum is : " << total_marks;
    }
};

int main()
{
    Result r;
    r.Read_Amarks();
    r.Read_Emarks();

    r.Display_Sum();


    return 0;
}

//My Way;
/*
class a
{
protected:
    int a;
public:
    void Reada()
    {
        cout<<"\n Enter a : ";
        cin >> a;
    }
    void Displaya()
    {
        cout<<"\n a : " << a;
    }
};
class b
{
protected:
    int b;
public:
    void Readb()
    {
        cout<<"\n Enter b : ";
        cin >> b;
    }
    void Displayb()
    {
        cout<<" B : " << b;
    }
};
class sum: public a, public b
{
    float total_marks;
public:
    void total()
    {
        total_marks = a + b;
    }
    void Displaysum()
    {
        cout<<"\n Sum is : "<< total_marks;
    }
};

int main()
{
    sum s;
    s.Reada();
    s.Readb();
    s.total();

    cout<<"\n The Sum of ";
    s.Displaya();
    s.Displayb();
    s.Displaysum();

    return 0;
}
*/
