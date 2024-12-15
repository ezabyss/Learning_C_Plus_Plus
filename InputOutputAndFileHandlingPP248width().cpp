//WAP to display quantity, cost per piece and total cost of four items in tabular format. Use member function of ios class for formatting output.

#include <iostream>
using namespace std;
//My Way
int main()
{
    int Qty[4];
    float Cost[4];

    for(int i = 0; i<4;i++)
    {
        cout<<"\n Enter ITEM "<<i+1 <<" Quantity : ";
        cin>>Qty[i];
        cout<<"\n ITEM Cost : ";
        cin>>Cost[i];
    }

    cout<<" S.N ";
    cout.width(13);
    cout<<" Quantity ";
    cout.width(14);
    cout<<" Cost ";
    cout.width(14);
    cout<<" Total Cost ";

    float sum = 0;

    cout<<"\n-------------------------------------------";
    for(int i=0;i<4;i++)
    {
        cout<<"\n "<<i+1;
        cout.width(14);
        cout<<Qty[i];
        cout.width(14);
        cout<<Cost[i];
        cout.width(14);
        float totalcost = Qty[i] * Cost[i];
        cout<<totalcost;

        sum += totalcost;
    }
    cout<<"\n----------------------------------------------\n";
    cout<<" Grand Total : ";
    cout.width(28);
    cout<<sum;

    return 0;

}

//Book Way
/*
int main()
{
    int Qty[] = {5,4,3,2};
    float Cost[] = {15, 14, 13, 25};

    cout<<"S.N";
    cout.width(14);
    cout<<"Quantity ";
    cout.width(14);
    cout<<"Cost ";
    cout.width(14);
    cout<<"Total Cost";
    float sum = 0;
    for(int i = 0; i < 4; i++)
    {
        cout<<endl<<i+1;
        cout.width(14);
        cout<<Qty[i];
        cout.width(14);
        cout<<Cost[i];
        cout.width(14);
        cout<< Qty[i] * Cost[i];
        sum += Qty[i] * Cost[i];
    }
    cout<<"\n-------------------------------------------";
    cout<<"\n Grand Total : ";
    cout.width(28);
    cout<<sum;
    cout<<"\n-------------------------------------------";
    return 0;
}
*/
