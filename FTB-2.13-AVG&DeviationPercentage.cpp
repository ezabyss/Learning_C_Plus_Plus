//WAP that reads mark's percentage in an examination of 10 students. Calculate and display the average percentage and deviation percentage from average of each student

#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
    float marks[10],avg, dev,sum=0;
    int i;
    for(i=0;i<10;i++)
    {

    cout << " Enter percentage of " << (i+1) <<"/10 :";
    cin >> marks[i];
    sum += marks[i];
    }
    avg = marks / 10;
    cout << endl << " The average marks is : " << avg;

    cout << endl << " The deviation of each student from average: ";
    for(i=0;i<10;i++)
    {
        dev = marks[i] - avg;
        cout << endl << " Marks = "<<marks[i] <<
    }



    _getch();
    return 0;
}
