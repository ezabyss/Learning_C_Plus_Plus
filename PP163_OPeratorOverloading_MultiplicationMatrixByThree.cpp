//Overloading of multiplication operator (i.e. *) to multiply each element of a matrix by three.

#include <iostream>
#include <stdio.h>
using namespace std;
//Book Way
/*
class Matrix
{
    int m[2][2];
public:
    void ReadMatrix()
    {
        cout<<"\n Enter Values for 2*2 matrix: \n";

        for(int i =0;i<2;i++)
            for(int j=0;j<2;j++)
                cin>> m[i][j];
    }
    void Display()
    {
        cout<<"\n Matrix: \n" ;
           for(int i =0;i<2;i++)
           {

            for(int j=0;j<2;j++)
                cout <<"\t"<< m[i][j];
           cout<<endl;
           }
    }
    friend Matrix operator*(int n, Matrix mat);
};

Matrix operator*(int n, Matrix mat)
{
    Matrix temp;

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            temp.m[i][j] = mat.m[i][j] * n;

        return temp;
}
int main()
{
    Matrix Mtr, Result_mtr;


    cout<<" \n Enter Values for object mtr ";
    Mtr.ReadMatrix();

    cout<<"\n Matrix Values are: ";
    Mtr.Display();

    Result_mtr =  3 * Mtr; //Same as operator*(3,mtr);

    cout<<"\n Matrix After Multiplying by 3 : ";
    Result_mtr.Display();

    return 0;



}

*/
//My Way

class Matrix
{
private:
    int m[2][2];
public:
    void ReadMatrix()
    {

        for(int i=0; i<2;i++)
            for(int j=0;j<2;j++)
            {
               printf("\n Mat[%d][%d] : ",i,j);
               cin>>m[i][j];
            }
    }
    void Display()
    {
        for(int i=0; i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout<<"\t"<< m[i][j];
            cout<<endl;
        }
    }
    friend void operator*(int, Matrix &);

};

void operator*(int num, Matrix &mat )
{

    for(int i=0; i<2;i++)
        {
            for(int j=0;j<2;j++)
                mat.m[i][j] *= num;
        }

}

int main()
{
    Matrix mat;

    int n;

    cout<<"\n Enter 2*2 matrix: ";
    mat.ReadMatrix();

    cout<<"\n Entered Matrix are: \n";
    mat.Display();

    cout<<"\n\n Enter number to Multiply n : ";
    cin>>n;

    n * mat; // same as operator(n,mat);

    cout<<"\n After Multiplied by 3: \n";
    mat.Display();



    return 0;
}

