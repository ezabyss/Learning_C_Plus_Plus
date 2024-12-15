//To convert class type to basic data type:
//Convert distance expressed in feet and inch into single value meter;

#include <iostream>
using namespace std;

const float MTF = 3.280833;
class Distance
{
    float feet,inch;
public:
    void Get()
    {
        cout<<"\n Enter Feet : ";
        cin >> feet;
        cout<<"\n Enter Inch : ";
        cin >> inch;
    }
    void Display()
    {
        cout<<" "<<feet <<" ft "<< inch << " in.";
    }
    operator float() //conversion function
    {
        float f = feet + inch/12 ;
        float total_meter = f/MTF;
        return total_meter;
    }
};


int main()
{
    Distance D;
    cout<<"\n Enter Distance : ";
    D.Get();
    cout<<"\n Distance : ";
    D.Display();
    float meter = float(D);
    //uses conversion function to convert distance to meter & it is equivalent to dist1.operator float() */
    cout<<"\n The Equivalent value in Meter : "<<meter;


    return 0;
}
