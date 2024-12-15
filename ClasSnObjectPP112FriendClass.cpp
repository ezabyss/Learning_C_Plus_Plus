//WAP to define two classes, one friend of another.
//Confusing.
#include <iostream>
/*
using namespace std;

class Academic   //Friend becoming class must be declared first;
{
    float Amarks;
public:
    void GetMarks()
    {
        cout <<"\n Enter Academic Marks: ";
        cin >>Amarks;
    }
    friend class ExtraActivities;

};
class ExtraActivities
{
    float Emarks;
public:
    void GetEMarks()
    {
        cout <<"\nEnter ExtraActivities Marks: ";
        cin >> Emarks;
    }
    void Display(Academic A)
    {
        cout <<"\n Academic Marks is : "<< A.Amarks;
        cout <<"\n ExtraActivities Marks is : "<<Emarks;
    }
    float Sum(Academic A)
    {
        float total;
        total = Emarks + A.Amarks;
        return total;

    }
};

int main()
{
    Academic A;
    ExtraActivities E;
    //A.GetMarks;

    A.GetMarks();
    E.GetEMarks();
    E.Display(A);

    float total;
    total = E.Sum(A);
    cout <<" \nThe Sum is : "<< total;




    return 0;
}
*/

using namespace std;

class ExtraActivities;

class Academic
{
    float Amarks;
public:
    void GetAmarks()
    {
        cout << " \nEnter Academic marks: ";
        cin >> Amarks;
    }
    void Sum(ExtraActivities);
};

class ExtraActivities
{
    float Emarks;
public:
    void GetEmarks()
    {
        cout<< " \nEnter ExtraActivities Marks: ";
        cin >> Emarks;
    }
    friend class Academic;
};

void Academic::Sum(ExtraActivities E)
{
    float total;
    total = Amarks + E.Emarks;
    cout << " \n The Sum is: "<<total;
}

int main()
{
    Academic A;
    ExtraActivities E;

    A.GetAmarks();
    E.GetEmarks();

    A.Sum(E);



    return 0;
}

/*
In tis example, class Academic is defined as friend class of ExtraActivities class. So , every members of class Academic can access every members of class ExtraActivities including private members. Here, the member function calculate TotalMarks() class Academic is using private member ex_marks of class ExtraActivities.


Friend function and friend class Breaches the wall of OOPs
The philosophy of OOPs is that we can't access private members of a class from outside the class. But in C++, we can access private members of a class even from non-member function using concept of friend function and friend function and friend class. So, it is against the philosophy of OOPs. So, the friend function and friend class breaches the wall of OOPs
*/
