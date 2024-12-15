//WAP to define two classes, one friend of another.

#include <iostream>

using namespace std;

//MyWay
class Academic;
class ExtraActivities;

class Academic
{
    float Amarks;
public:
    void GetAmarks()
    {
        cout<<"\n Enter Academic marks : ";
        cin >> Amarks;
    }
    //void CalculateTotal(ExtraActivities E); //If ExtraActivities make Academic Friend.

    friend class ExtraActivities;
};

class ExtraActivities
{
    float Emarks;
public:
    void GetEmarks()
    {
        cout<<"\n Enter ExtraActivities marks : ";
        cin >>Emarks;
    }
    //void void CalculateTotal(ExtraActivities E)
    void CalculateTotal(Academic A)
    {
        float sum;
        sum = A.Amarks + Emarks;
        cout<<"\n Total Marks is : "<< sum;

    }
    // friend class Academic;

};
/*
void Academic::CalculateTotal(ExtraActivities E)
    {
        float sum;
        sum = Amarks + E.Emarks;
        cout<<"\n Total Marks is : "<< sum;

    }
*/
int main()
{
    Academic A;
    ExtraActivities E;
    A.GetAmarks();
    E.GetEmarks();

    //A.CalculateTotal(E); //if
    E.CalculateTotal(A);


    return 0;
}
