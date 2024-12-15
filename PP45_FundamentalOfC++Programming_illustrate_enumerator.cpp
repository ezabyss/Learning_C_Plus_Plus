//WAP to define enumerator with you choice. Assign your own integer value to enumerator instead of default value.


#include <iostream>

using namespace std;

int main()
{
    enum shape
    {
        Triangle  = 3,
        Rectangle = 4,
        Pentagon  = 5,
        Hectagon  = 7,
        Nonagon   = 9,
        Circle    = 0,
        Hello
    };
    cout<<"\n   Shape       Number of Side ";
    cout<<"\n ------------------------------------";
    cout<<"\n  Triangle          "<<  Triangle;
    cout<<"\n  Rectangle         "<<  Rectangle;
    cout<<"\n  Nonagon           "<<  Nonagon;
    cout<<"\n  Circle            "<<  Circle;
    cout<<"\n  Hello             "<<  Hello;

    return 0;
}
