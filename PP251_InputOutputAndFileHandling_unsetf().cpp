//unsetf()

//This is another member function of ios class which is used to clear the flag specified

#include <iostream>
using namespace std;
//MY WAY
/*
int main()
{
    cout.setf(ios::hex,ios::basefield);

    cout<<"\nPresently setf(ios::hex,ios::basefield) : ";
    cout<<"\n 24 = "<< 24 ;

    cout.unsetf(ios::hex);
    cout<<"\n 24 = "<< 24;
    return 0;
}
*/
//Book Way

int main()
{
    cout.fill('*');
    cout<<endl<<"After right justified (i.e. cout.setf(ios::left,ios::adjustfield) : "<<endl;
    cout.setf(ios::left,ios::adjustfield);
    cout.width(30);
    cout<<" Ob-Xk Thaqrei ";
    cout.unsetf(ios::left);

    cout<<"\n\n After unsetf(ios::left) : "<<endl;
    cout.width(30);
    cout<<" Ob-Xk Thaqrei ";



    return 0;
}
