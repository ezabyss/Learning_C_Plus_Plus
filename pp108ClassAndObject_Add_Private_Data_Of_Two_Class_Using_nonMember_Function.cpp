//WAP which has two classes: Academic and ExtraActivities which have own data members to store academic and extra activities marks respectively.
//Define independent function which calculates total marks (i.e. academic marks of academic class and extra activities marks of Extra-Activities class.)

//WAP to add private data members of two classes using a non-member function.

#include <iostream>

using namespace std;

//BookWay
class ExtraActivities;
class Academic
{
private:
    float acd_marks;
public:
    void GetMarks()
    {
        cout<<"\n Enter marks in Exam : ";
        cin >> acd_marks;
    }
    friend float CalculateTotalMarks(Academic,ExtraActivities);
};
class ExtraActivities
{
private:
    float Ex_marks;
public:
    void GetExMarks()
    {
        cout<<"\n Enter marks in exam : ";
        cin >> Ex_marks;
    }
    friend float CalculateTotalMarks(Academic, ExtraActivities);
};

float CalculateTotalMarks(Academic acd, ExtraActivities ex)
{
    float total;
    total = acd.acd_marks+ex.Ex_marks;
    return total;
}
int main()
         {
             Academic a;
             ExtraActivities e;
             float m;
             a.GetMarks();
             e.GetExMarks();
             m = CalculateTotalMarks(a,e);
             cout<<"\n Total marks : "<<m;

             return 0;
         }
//MyWay
/*
class Academic;
class ExtraActivities;

class Academic
{
private:
    float Amarks;
public:
    void Getmarks()
    {
        cout<<"\n Enter Marks : ";
        cin >> Amarks;
    }
    friend void Sum(Academic,ExtraActivities);
};
class ExtraActivities
{
private:
    float Emarks;
public:
    void Getmarks()
    {
        cout<<"\n Enter ExtraActivities Marks : ";
        cin>>Emarks;
    }
    friend void Sum(Academic, ExtraActivities);
};
void Sum(Academic AC,ExtraActivities EA)
{
    float S;
    S = AC.Amarks + EA.Emarks;
    cout<<"\n Sum is : " << S;
}
int main()
{
    Academic AC;
    ExtraActivit ies EA;
    AC.Getmarks();
    EA.Getmarks();

    Sum(AC,EA);

    return 0;
}
*/
