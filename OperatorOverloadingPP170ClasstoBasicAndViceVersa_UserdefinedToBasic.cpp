/* The constructor is used for converting basic types to class type. But we annot use constructors for converting class types to basic data types. Instead, we can define an overloaded casting operator that can be used to convert a class data type into a basic data type. The general form of an overloaded casting operator function is show as follow:

operator type_name()
{
function body;
}
The function having above syntax converts the class type into the type_name mentioned in the function. For example, operator float() converts a class type to float, operator int() converts a class type to int, and so on. The operator function must have following characteristics.
a) It must be a member of a class
b) it must not specify a return type.
c) It must not have any argument.
*/
//WAP to convert class type to basic data type{Convert distance expressed in feet and inch into single value meter];

#include <iostream>
using namespace std;
const float MTF = 3.2808;
//My WAY
/*
class Distance
{
    int feet, inch;
public:
    void ReadDistance()
    {
        cout<<"\n Enter feet, inch: ";
        cin>>feet>>inch;
    }

    operator float()
    {
        float f = inch/12;
        f += feet;
        return feet/MTF;
    }
};
int main()
{
    Distance Dis;
    float meter;
    Dis.ReadDistance();

    meter = Dis; //same as meter = Dis.operator();

    cout<<"\n The Value as meter: " << meter;

    return 0;
}

*/

//Book
class Distance
{
private:
    int feet;
    float inch;
public:
    Distance()
    {
        feet = inch = 0;
    }
    Distance(int f, float i)
    {
        feet = f;
        inch = i;
    }

    operator float()
    {
        float f = (feet + inch/12) /MTF;
        return f;
    }


    void Display()
    {
        cout<<endl<< feet << "  " << inch;
    }
};

int main()
{
    Distance D1(3,3.37), D2(200, 5.5);
    float meter;

    meter = D1; // same as D1.operator float();
    D1.Display();
    cout<<"\n Equivalent Inch and Float :" <<meter;

    meter = D2.operator float();
    D2.Display();
    cout<<"\n Equivalent Inch and Float :" <<meter;

    return 0;
}
