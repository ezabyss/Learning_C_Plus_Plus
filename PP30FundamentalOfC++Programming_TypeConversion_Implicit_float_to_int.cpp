//WAP to illustrate the use of implicit conversion from float to int type.

#include <iostream>

using namespace std;

int main()
{
    float numf = 22.33;
    int numi ;

    cout<<"\n Float num : "<< 22.33;
    numi = numf; //Type conversion Here;

    cout <<"\n Value as int   type : "<< numi ;
    cout <<"\n Value as float type : "<< numf;

    return 0;
}
