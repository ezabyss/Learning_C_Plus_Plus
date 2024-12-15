//WAP to show the use of destructor to destroy variables

#include <iostream>
#include <conio.h>
using namespace std;
class Box
{
private:
    int *p;

public:
    Box()
    {
        p = new int[3];//allocates a new integer array, place its address in p;
        cout <<"\n Memory Array allocated using constructor : p = new int[3]";
    }

        void ReadData()
        {
            cout<<"\nEnter Length: ";
            cin >> *(p);
            cout<<"\nEnter Breadth: ";
            cin >> *(p+1);
            cout<<"\nEnter Height: ";
            cin >> *(p+2);
        }
        void Display()
        {
            cout <<"\n length: "<< *p;
            cout <<"\n Breadth: "<< *(p+1);
            cout <<"\n Height: "<< *(p+2);
        }
        void Volume()
        {
            cout <<"\n Volume is: "<< *p * *(p+1) * *(p+2);
        }

        ~Box()
        {
            delete p; //de-allocate the integr array
            cout <<"\n\n Array delected using destructor ";
        }
};

int main()
{
    Box B1;
    B1.ReadData();
    B1.Display();
    B1.Volume();

    _getch();
    return 0;
}
