//WAP define an enumerator Days with the name of seven days as enumerated-list. Read an integer value from user and display message " holiday " input value is 1 or 7 other " Working Day".

#include <iostream>

using namespace std;

int main()
{
    enum Days{ Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

    int num;
    Days d;

    cout<<"\n Enter Day of the week (1-7) : ";
    cin>> num;

    d = Days(num); //or (Days)num :- Typecasting to Days Datatype.

    if(d== Sunday || d == Saturday)
        cout<<"\n Enjoy... Today is Holiday"<<endl;
    else
        cout<<"\n Sorry... Working Day"<<endl;

    cout<<"\n Enter Number : ";




    return 0;
}
