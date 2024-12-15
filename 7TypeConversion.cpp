
/* WAP to convert from ' short ' type value to ' int ' type PP-29 */

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    short num = 20;
    int numi;

    numi = num; //type conversion
    cout << " Value as short type: "<< num;
    cout << " Value as int type : " << numi;

    _getch();
    return 0;
}
