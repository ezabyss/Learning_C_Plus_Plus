//Create a class student with rno to represent RollNo as data member, getnumber() and putnumber() as member functions to read and display roll no of a student. Create two derived classes Exam and sport from student class. The Exam class handles marks in exam and class sport handles score received in sport activities. Finally, derive a fourth class Result from class Exam and sport to calculate total score. WAP to real rollno, marks in exam & sport and display total score using above classes. [or Write a program to illustrate the use of virtual base class.]

#include <iostream>
using namespace std;

//MyWay

/*

class Student
{
protected:
    int rno;
public:
    void getnumber()
    {
        cout<<"\n Enter roll no.  : ";
        cin>> rno;
    }
    void putnumber()
    {
        cout<<"\n Roll No.  : " << rno;
    }
};
class Exam: virtual public Student
{
protected:
    float E_marks;
public:
    virtual void GetExamMarks() = 0;
    virtual void DisplayExamMarks() = 0;

};
class Sport: virtual public Student
{
protected:
    float S_marks;
public:

    virtual void GetSportMarks() = 0;

    virtual void DisplaySportMarks() =0;



};

class Result: public Exam,public Sport
{
    float totalmarks;
    public:
        void GetExamMarks()
        {
            cout<<"\n Enter Exam Marks : ";
            cin>> E_marks;
        }
        void GetSportMarks()
                {
                    cout<<"\n Enter Sport Marks : ";
                    cin>> S_marks;
                }

        void calc_total()
            {
                totalmarks = E_marks + S_marks;
            }
        void DisplaySportMarks()
        {
            cout<<"\n Sport Marks : "<< S_marks;
        }

        void DisplayExamMarks()
            {
                cout<<"\n Exam Marks : "<< E_marks;
            }

        void DisplayTotalMarks()
        {
            cout<<"\n Total Marks is  : "<< totalmarks;
        }
};
int main()
{
    Result r;
    r.getnumber();
    r.GetExamMarks();
    r.GetSportMarks();

    r.DisplayExamMarks();
    r.DisplaySportMarks();

    r.calc_total();
    r.DisplayTotalMarks();


    return 0;
}
*/
class student
{
    int rno;
public:
    void getnumber()
    {
        cout<<"\n Enter Roll No.  ";
        cin>> rno;
    }
    void putnumber()
    {
        cout<<"\n\n Roll No. : "<< rno;
    }
};
class exam: virtual public student
{
protected:
    int part1, part2;
public:
    void getmarks()
    {
        cout<<"\n Enter Marks : ";
        cout<<"\n    Part1    : ";
        cin >>part1;
        cout<<"\n    Part2    : ";
        cin>>part2;
    }
    void putmarks()
    {
        cout<<"\n\t Marks Obtained : ";
        cout<<"\n\t  Part1    : "<< part1;
        cout<<"\n\t  Part2    : "<< part2;
    }
};
class sports : public virtual student
{
protected:
    int score;
public:
    void getscore()
        {
            cout<<"\n Enter Sports Score  : ";
            cin>> score;
        }
        void putscore()
        {
            cout<<"\n\t Sports Score    : "<< score;
        }
};

class result: public exam, public sports
{
    int total;
public:
    void display()
    {
        total = part1 + part2 + score;
    putnumber();
    putmarks();
    putscore();
    cout<<"\n\t Total Score : "<< total;

    }
};
int main()
{
    result r;
    r.getnumber();
    r.getmarks();
    r.getscore();
    r.display();

    return 0;
}

/*
An ABSTRACT CLASS is one whose role is only a foundation for other classes that would need a common behavior or similar characteristics. Therefore, an abstract class is used only as a base class for inheritance. A class is made abstract by declaring it methods as pure virtual methods. No objects of an abstract base class class can be instantiated.

The sole purpose of an abstract class is to provide an appropriate base class from which classes may inherit interface and/or implementation. The opposite of ABSTRACT CLASS is CONCRETE CLASS from which objects can be instantiated.

A class is made abstract by declaring one or more of its virtual function, to be pure.
A pure Virtual function is one with an initializer of = 0 on its declaration as in
        Virtual return_type function(0 = 0 //pure virtual function.

If a class is derived from a class with a pure virtual function, and if no definition as supplied of that pure virtual function in the derived class, & if no definition is supplied of that pure virtual function in the derived class, then that virtual function remains pure in the derived class. Consequently, the derived class is also an abstract class.
Attempting to instantiate an object of abstract class(i.e class that contains one or more pure virtual function) is a syntax error

 Example:
 class Polygon
 {
    protected:
        int width, height;
    public:
        virtual int area() = 0;
 };

 //Characteristics of Abstract Class

 a) Allows base class to provide only an interface for its derived classes.
 b) Prevents anyone from creating an instance of this class.
 c) A class is made abstract by defining at least one virtual function pure.


*/
//Virtual Base class
/*
Parent-> child1 , Parent -> child2
child1->Grandchild, child2 ->Grandchild

Consider a situation, with a base class, parent; two derived classes, Child1 and Child2; and a fourth class, GrandChild, derived from both child1 & child2

As child1 and child2 inherit Parent, they both have copies of parents. However, GrandChild Inherits both Child1 and Child2. This means that ther are two copies of parents in an object of type GrandChild.. The use of member inherited from Parent through child1 and Child2 into virtual base class as below.

class Parent
{
}
class Child: virtual public parent //shares copy of parent
{
}
class Child: Virtual public parent //share copy of parent
{
}
class grandchild: public child1, public child2;
{
}

The use of keyword virtual in these two classes causes them to share a single copy of their base class parent. Now, since there is only one copy of Parent, there is no ambiguity when it is referred to in GrandChild. Here the virtual base class restricts its derived class from having the multiple copies of common ancestor
*/




