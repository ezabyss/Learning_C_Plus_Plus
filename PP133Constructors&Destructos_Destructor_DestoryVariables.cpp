//WAP to show the use of destructor to destroy variables

#include <iostream>
using namespace std;
class Box
{
private:
    float *ptr;
public:
    Box()
    {
        ptr = new float[3];
        //allocate a new integer array, place its address in p
    }
    void ReadData()
    {
        cout<<"\n Enter L : ";
        cin >> *ptr;
        cout<<"\n B : ";
        cin >> *(ptr+1);
        cout<<"\n H : ";
        cin >> *(ptr+2);
    }
    float getvolume()
    {
        return (*ptr * *(ptr+1) * *(ptr+2));
    }
    ~Box()
    {
        delete ptr; //de allocate the integer array
    }
};
int main()
{
    Box b;
    b.ReadData();
    cout<<"\n Volume is : "<< b.getvolume();

    return 0;
}
