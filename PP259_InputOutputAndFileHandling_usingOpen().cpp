//WAP to write a message "Welcome to my college " in a file named welcome.txt. Use open() function to open a file.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream write;
    write.open("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\welcome.txt");


    write<<"Welcome to my College. ";

    write.close();

    cout<<"\n\t Data Written Successfully!!~ ";

    return 0;
}
/*

File has been created successfully... The output of this program is same as program written using constructor. Here, we create object of ofstream class and then call open() function using the object to open the file.
*/
