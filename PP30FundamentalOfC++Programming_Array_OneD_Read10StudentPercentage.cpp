//WAP that read mark's percentage in an examination of 10 students. calculate and display the average percentage and deviation percentage from average of each student.

#include <iostream>

using namespace std;
int main()
{
    float per[10];
    int i;
    float total_per = 0;
    cout<<"\n Enter Percentage of 10 student : ";

    for(i=0;i<10;i++)
    {
        cout<<"\n Student "<<i + 1 <<" : ";
        cin>>per[i];
        total_per += per[i];
    }
    float average_percent = total_per / 10 ;
    cout<<"\n Average Percent is : "<< average_percent ;

    cout<<"\n\n DEVIATION PERCENTAGE from AVERAGE OF EACH STUDENT ";
    float deviation =0;
    cout<<" \n Student \t\t Deviation ";
    for(i=0;i<10;i++)
    {
        cout<<"\n Student "<< i + 1 ;
        deviation = per[i] - average_percent;
        cout<<"\t\t " << deviation ;
    }


    return 0;
}
