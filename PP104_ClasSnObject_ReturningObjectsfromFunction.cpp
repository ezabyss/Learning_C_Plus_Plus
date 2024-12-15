// WAP which has class Distance with data members feet and inch of appropriate type. Define a member function of the class to add two distances expressed in feet and inch and return sum in main program.

#include <iostream>

using namespace std;

class Distance
{
private:
    float feet, inch;
public:
    void ReadValue()
    {
        cout << " Enter feet: ";
        cin >> feet;
        cout<< " Enter inch: ";
        cin >> inch;
    }

    Distance AddDist(Distance D2)
    {
        Distance Sum;

        Sum.feet = feet + D2.feet;

        Sum.inch = inch + D2.inch;
        if(Sum.inch >= 12)
        {
            Sum.feet += 1;
            Sum.inch -= 12;
        }
        return Sum;
    }

    void Display()
    {
        cout<<"\n The Sum is : "<< feet <<" ft " << inch <<" inch";
    }
};

int main()
{

    Distance D1, D2, Sum;

    cout<<" Enter values for D1: ";
    D1.ReadValue();

    cout <<" Enter Values for D2: ";
    D2.ReadValue();

    Sum = D1.AddDist(D2);

    Sum.Display();

    return 0;

}

/*
In this example, function Add() passes one object as arguments and other object is passed as calling object. The data members of the calling object within function definition are used without object and data members of object which is going to pass as argument are accessed using object name and dot operator. This function returns value of type Distance i.e. object of classes Distance. The returned object is store din another object d3  in main () function. We can change prototype of Add() function as follow

Distance Add(Distance, Distance);

note: Variable and function name may be different between definition and Above program.
*/
