
// WAP to define a class named Box which has private data length, breadth & height and public functions ReadData() for reading data members and Volume() to calculate volume of Box. Use this class to calculate volume of a box.



#include <iostream>
#include <conio.h>

using namespace std;


class Box
{
private:
    float length, breadth, height;
public:
    void ReadData()
    {
        cout << " \n Enter Length: ";
        cin >> length;
        cout << " \n Enter Breadth: ";
        cin >> breadth;
        cout << " \n Enter height: ";
        cin >> height;
    }

    float Volume()
    {
      cout << " \nVolume of Box is : "<< (length * breadth * height) ; //directly showing result

      return (length * breadth * height);  //Returning result;
    }
};

int main()
{
    Box B;

    B.ReadData();

    float V;
    V = B.Volume();
    cout << "\n Volume of given box is : " << V;

    return 0;
}
