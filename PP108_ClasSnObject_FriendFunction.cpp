//WAP which has two classes: Academic ad Extra Activities which  have own data members to store academic and extra activities marks respectiverly. Define independent function which calculates total marks (i.e. academic marks of Academic class and extra activites marks of ExtraActivites class).
//WAP to add two private data members of two classes using a non-member function

#include<iostream>

using namespace std;

class Extra_Activities;

class Academic
{
private:
    float Amarks;
public:
    void ReadMarks()
    {
        cout<<"\nEnter Academic Marks: ";
        cin >> Amarks;
    }

    friend float Add(Academic,Extra_Activities);

};

class Extra_Activities
{
public:
    float Emarks;
public:
    void ReadMarks()
    {
        cout<<"\n Enter Extra Activities Marks: ";
        cin >> Emarks;
    }
    friend float Add(Academic,Extra_Activities);

};


float Add(Academic A, Extra_Activities E)
{
    //float total;
    //total = A.Amarks + E.Emarks;
    //cout <<"\nThe Total is: "<<total;

    return A.Amarks + E.Emarks;
}

int main()
{
    Academic A;
    Extra_Activities E;


    A.ReadMarks();
    E.ReadMarks();

    float total;

    total = Add(A,E);

    cout<<"\nThe Total is: "<<total;

    return 0;
}


/* Here, we have two classes, ExtraActivities and Academic. The class extra activities. Similarly, the class Acadmic has acd_marks as private members to studnt by addding these two private members of two different classes. Here, we are using a classes. The function CalculateTotal Marks() has been defined as normal function  and it is declared as friend of both classes such that it can access private data members of both classes.

In above example: the statement class ExtraActivities; has been uses as class prototype. the class eExtraActivities has been defined after its use within Academic class in declaration statement of friend function. So, we have to use this type of class prototype to inform the comiler in advane about its definition.

*/
