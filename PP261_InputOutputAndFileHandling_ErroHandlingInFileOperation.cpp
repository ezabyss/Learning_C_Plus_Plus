//In C++, file stream classes inherit stream state member function from ios class. The stream state member functions provide the information about state of the stream object like end of file, failure in opening process etc. The state member function can be used for error handling in C++ . the functions can be explained as follows:

/*
a) eof()
        The eof() is a stream state member function which is used to check whether a file pointer has reached the end of a file or not. If it is true, eof() returns nonzero and zero otherwise. The function has been explained in previous section.

b) fail()
        The fail() stream state member function is used to check whether a file has been opened for input or output operation successfully , or any invalid operations are attempted or there is an unrecoverable error. If it fails, it returns nonzero character and zero otherwise.

a) bad()
        The bad() stream state member function is used to check whether any invalid file operations has been attempted or there is an unrecoverable error. The bad() member function returns a nonzero if it is true; otherwise return 0;

b) good()
        The good() stream state member function is used to chck if the state of the stream object is good for i/o operations or not. The function returns ture if none of the stream's error flags(i.e eof, fail and bad bit) are set. Teh good() returns a nonzero if all the stream bits are zero.

*/

//WAP to illustrate the use of fail function

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int pos;

    ifstream out("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\marks.txt");

    if(out.fail())
    {
        cout<<"Error while opening file.... ";
        _getch();
        exit(1);
    }
    cout<<"\n file opened successfully....";

    return 0;
}
/*
1) if file named"tt.txt"exist inworking directory, the output will be file has been opened successfully.. ";
2) If file named"ttt.txt" doesn't exist in working directory, the output will be Error while opening file....
*/
