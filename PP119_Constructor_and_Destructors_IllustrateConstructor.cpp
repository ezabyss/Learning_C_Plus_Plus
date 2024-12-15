//WAP to illustrate the characteristics of a constructor.

#include <iostream>
using namespace std;
//My Way
/*
class Con
{

public:
    Con()
    {
        cout<<"\n This is constructor. ";
    }
};
int main()
{
    Con C;

    return 0;
}
*/
//Book Way

class Box
{
public:
    Box()
    {
        cout<<"\n I Am from constructor . ";
    }
};

int main()
{
    Box b1,b2,b3;
    return 0;
}


