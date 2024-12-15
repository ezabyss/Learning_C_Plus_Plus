//WAP to convert from short type value to int type.

#include <iostream>

using namespace std;

int main()
{
    short num = 200;
    int numi;

    numi = num; // type conversion;
    cout<<"\n Value as short type : "<<num;
    cout<<"\n Size  of short : "<< sizeof(num) <<endl;
    cout<<"\n Value as int   type : "<<numi;
    cout<<"\n Size  of int  : "<< sizeof(int) <<endl;


    return 0;
}
