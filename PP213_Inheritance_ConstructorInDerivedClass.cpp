//WAP to use constructor in base classes in case of multiple inheritances

#include <iostream>
using namespace std;

class AcademicActivities
{
    float amarks;
public:
    AcademicActivities()
    {
        amarks = 0;
    }
    AcademicActivities(float marks)
    {
        amarks = marks;
    }

    void DisplayAmarks()
    {
        cout<<"\n Total Academic marks : " << amarks;
    }
};
class ExtraActivities
{
protected:
    float discipline_marks;
    float punctuality_marks;
public:
    ExtraActivities()
    {
        discipline_marks = punctuality_marks = 0;
    }
    ExtraActivities(float d, float p)
    {
        discipline_marks = d;
        punctuality_marks = p;
    }
    void DisplayEmarks()
    {
        cout<<"\n Discipline Marks  : "<< discipline_marks;
        cout<<"\n Punctuality Marks : "<< punctuality_marks;
    }

};
class Result: public AcademicActivities, public ExtraActivities
{
    float total_marks;
public:
    Result(float amarks, float dmarks, float pmarks):AcademicActivities(a),ExtraActivities(d,p)
    {
        //No data members to be initialized
        //All are used to pass base classes
    }
    void CalculateResult()
    {
        total_marks = amarks + punctualitymarks + discipline_marks,
    }
    void DisplayResult()
    {
        cout<< " \n The Total Marks is : "<< total_marks;
    }
};

int main()
{
    float a,d,p;
    cout<<"\n Enter Academic Marks    :";
    cin >> a;
    cout<<"\n Enter Discipline Marks  : ";
    cin >> d;
    cout<<"\n Enter Punctuality Marks : ";
    cin >> p;

    Result R(a,d,p);
    R.CalculateResult();
    cout<<endl<<" ************ Your Record is : ********* "<<endl;
    R.DisplayResult();

    return 0;
}

/*

In this Example, class result has data member: total_marks but it doesn't need to be initialized as it is calculated from acd_total_marks, discipline_marks, punctuality_marks. though the class Result has no data members to be initialized, it must have constructor which receives data and passes to constructors in base classes:AcademicActivities and ExtraActivities.

*/
