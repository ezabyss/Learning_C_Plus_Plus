//The reinterpret_cast casts a pointer to any other type of pointer. this operator can cast pointers between non-related classes.

//SYNTAX : reinterpret_cast<type> (expr)

//MyWay
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int(20);

    cout<<"\n int *ptr = new int[5] = *ptr :::"<< *ptr << endl;

    void *ptr2 = reinterpret_cast<void*> (ptr);

    //cout<<"\n void *ptr2 = reinterpret_cast<void*> (ptr2) :::"<< *ptr2;


    int *ptr3 = reinterpret_cast<int*> (ptr);
    cout<<"\n int *ptr3 = reinterpret_cast<int*> (ptr3) :::"<< *ptr3;

    return 0;
}

/*
#include <iostream>
using namespace std;
int main()
{

    int *ptr = new int[20];
    cout<<"\n First Value = " << *ptr ;
    void *ptr2 = reinterpret_cast<void*> (ptr);
    int  *ptr3 = reinterpret_cast<int*> (ptr2);

    cout<<"\n Final reinterpret cast value is  : "<< *ptr3 << endl;

    cout<<"\n In above example, the reinterpret_cast operator is used to convert a integer pointer to a pointer of type void then converted into a integer pointer;
    return 0;
}
*/
