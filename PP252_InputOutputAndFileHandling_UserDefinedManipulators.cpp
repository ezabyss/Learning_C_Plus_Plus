
//we can define own manipulator according to the requirements of the program. The syntax for defining manipulator is given below  :
/*
 ostream & manipulator_name(ostraem &o)
 statement1;
 statement2;

 return 0;
*/
//WAP to create manipulator equivalent to '\t'. Use it in the program and format the output.
#include <iostream>

using namespace std;

//My way
/*
ostream & ekvitta(ostream & o)
{
    o << " \t ";

}
int main()
{

    int num1 = 23, num2 = 56, num3 = 90;
    cout<<num1<<ekvitta<<num2 <<ekvitta<<num3;
    return 0;
}
*/

ostream & tab (ostream & o)
{
    o << '\t'; // heinira matrw confuse vaye mah.
}
int main()
{
    int n=12,n2=13,n3=45;
    cout<<n<<tab<<n2<<tab<<n3;
    return 0;
}
