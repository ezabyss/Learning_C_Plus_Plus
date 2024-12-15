//WAP to write a message "Welcome to my college" in a file named welcome.txt

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    /*
    ofstream out("Welcome.txt");
    out<<"Welcome to my College. ";
    out.close();

    cout<<" File has been created successfully...";
    */
    //We can fstream class also to open a file. The above program can be modified as below

    fstream out("Welcome.txt",ios::out);
    out <<"Welcome to my college ";
    out.close();
    cout<<"\n File has been created successfully. ";
    //The output of the program is same as previous program. Here, the file opening mode ios::out specifies output mdoe(i.e. for writing to data file).
    return 0;
}
/*
Here, screen shows only message "File has been created successfully..." But we can see a file named welcome.txt within bin directory which contains message "Welcome to my college". The creation of the file and data written to it is due to execution of above program. The created file can be viewed"
*/
