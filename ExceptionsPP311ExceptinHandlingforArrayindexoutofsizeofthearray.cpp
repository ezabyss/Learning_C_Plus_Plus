//WAP to use exception handling for array index out of size of the array
#include <iostream>

using namespace std;
int main()
{
    char msg[] = "Out of range";
    char myarray[10];

    try
    {
        for(int n= 0; n<=10;n++)
        {
            if(n>9)
                throw msg;

            myarray[n] = 'z';
        }
    }
    catch(char str[])
    {
        cout<<"\n Exception : "<< str;
    }
    return 0;
}
/*
In this example, when the value of n becomes more than 9, an exception is thrown since myarray[n] would point to anon trust worthy memory address in that case. When throw is executed, the try block finalizes right away and every object created within try block is destroyed. After that , the control is passes to corresponding catch block(that is only executed in these cases). Finally the program continues right after the catch block, in this case; return 0;
*/
