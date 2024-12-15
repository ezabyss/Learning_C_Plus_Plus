//Overloading of multiplication operator(i.e. * ) to multiply each element of a matrix by three.


#include <iostream>
#include <iomanip>
using namespace std;
/*
class Matrix
{
private:
    int m[2][2];
public:
    void ReadMatrix()
    {
        cout<<"\n Enter matrix of order 2*2 : "<<endl;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin>>m[i][j];
    }
    void DisplayMatrix()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout<<"\t"<<m[i][j];
            cout<<"\n";
        }
    }
    friend Matrix operator*(int,Matrix);
};
Matrix operator*(int factor,Matrix mat)
    {
        Matrix temp;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                temp.m[i][j] = mat.m[i][j] * factor;
        return temp;
    }
int main()
{
    Matrix mtr,ResultMtr;
    mtr.ReadMatrix();
    cout<<"\n The Original Matrix is : "<<endl;
    mtr.DisplayMatrix();
    ResultMtr= 3*mtr;
    cout<<"The result after multiplication by 3 "<<endl;
    ResultMtr.DisplayMatrix();
}
*/

class Matrix
{
    float mat[2][3];
public:
    void Get()
    {
        cout<<"Enter Value for Matrix : ";
        for(int i= 0;i<2;i++)
            for(int j =0;j<3;j++)
        {
            cout<<"\n Mat "<<"["<<i<<"]"<<"["<<j<<"] :" ;
            cin >>mat[i][j];
        }
    }
    void Display()
    {
        cout<<"\n Data in The Matrix : \n";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
                {
                    cout<<setw(10)<<mat[i][j];
                }
            cout<<endl;
        }
    }
    friend void operator*(Matrix &,int);
};

void operator*(Matrix &M,int n)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            M.mat[i][j] = M.mat[i][j] * n;
        }
    }
}
int main()
{
    Matrix m1,m2;
    m1.Get();
    m1.Display();

    m1 * 3;
    m1.Display();

    cout<<"\n After Multiplied By 3 : ";
    //m2.Display();
    m1.Display();

    return 0;
}

