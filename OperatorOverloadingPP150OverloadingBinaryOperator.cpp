//The operators which require two operands for its operations are known as binary operators. for examples: binary plus ( +), binary minus ( -), multiplication (*), division (/), greater than (>), less than(<), Equality operator (==) etc. The member function can be used as operator function using syntax
/*Syntax :
return_type operator binary operator(object2_of_class)
{
 body
  }
*/

//WAP to overload a binary plus operator(+) for addition of two complex number.

#include<iostream>
using namespace std;
class Complex
{
private:
    int img, real;
public:
    void ReadData()
    {
        cout<<"\n Enter Real Part: ";
        cin >>real;
        cout<<"\n Enter Imaginary Part: ";
        cin >> img;
    }
    void Display()
    {
        if(img >= 0)
            cout<<"\n\t " << real <<" + j "<< img;
        else
            cout<<"\n\t "<< real <<" - j "<< (-1) *img;
            }
    Complex operator+(Complex C2)
    {
        Complex Sum;
        Sum.real = real + C2.real;
        Sum.img = img + C2.img;
        return Sum;

    //return Complex(real + C2.real,img + C2.img); //use of temporary object
    }
};

int main()
{
    Complex C1, C2 , Sum;
    cout<<"\n Enter Values for Object 'C1': ";
    C1.ReadData();
    cout<<"\n Enter Values for object 'C2': ";
    C2.ReadData();
    cout<<"\nC1: ";
    C1.Display();

    cout<<"\nC2: ";
    C2.Display();

    Sum = C1 + C2;  //C1.operator+(C2);

    cout<<"\nThe sum is: ";
    Sum.Display();

    return 0;
}

/*
In this program, operator function receives only one argument of type complex explicitly. the statement Sum=c1+C2 is equivalent to Sum = C1.operator+(C2) i.e the object C1 calls the operator function operator+() with one argument C2 of type complex and returns object of type Complex. thus, in the overloading of binary operator, the left-hand operand is used to invoke tho operator function and the right-hand operand is passed as an argument.
*/

//Important Trick;
//Temporary objects;
/*
We can avoid the creation of the temporary object in the above example by replacing the entire function body in definition of operator+(Complex c) operator function by the following statement,

return Complex( real + C.real, img + c. img)

The compiler invokes the second constructor(i.e. constructor with two arguments and initializes an object with no name and return the contents for copying into an objectSuch object is called temporary object and goes out of space as soon as the contents are assigned to another object. The use of temporary objects can mke the code shorter, more efficient and better to read;
*/
