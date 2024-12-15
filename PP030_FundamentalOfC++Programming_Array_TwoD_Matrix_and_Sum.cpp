//WAP to read two 2*3 matrixes and display their sum.

#include <iostream>
using namespace std;


int main()
{
    int mat1[2][3] ,mat2[2][3];

    cout<<"\n Enter Value for mat1 : ";
    for(int i = 0;i<2;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout<<"\n Mat1["<<i<<"]["<<j<<"]  :";
            cin>>mat1[i][j];
        }
    }
    cout<<"\n Enter Value for Mat2 : ";

    for(int i = 0;i<2;i++)
    {
        for(int j= 0;j<3;j++)
        {
            cout<<"\n Mat2["<<i<<"]["<<j<<"]  :";
            cin>>mat2[i][j];
        }
    }

    cout<<"\n Sum is : ";

    int sum[2][3];
    for(int i = 0; i<2 ;i++)
        for(int j = 0; j<3 ;j++)
    {
        sum[i][j] = mat1[i][j] + mat2[i][j];
    }

    cout<<"\n The Sum of Two Matrix is : \n";
    for(int i=0;i <2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"\t"<<sum[i][j];
        }
        cout<<"\n";
    }


    return 0;
}

