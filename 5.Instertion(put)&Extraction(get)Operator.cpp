// Insertion operator - <<
// Extraction operator - >>

using namespace std;

#include <iostream>
#include <conio.h>
int main()
{
    char msg[20];
    cout << " Enter a some text "; // Using Insertion Operator
    cin >> msg; // Using Extraction operator

    cout << " Your entered message is : " << msg;

    _getch();
    return 0;
}

