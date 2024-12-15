//WAP to count number of vowels and consonants in a text file

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    char fileName[15],ch;
    int nvowel =0, ncon = 0;

    cout<<"\n Enter file Name : ";
    cin>>fileName;

    ifstream inFile("A:\\Programming Task\\StartingC\\StartingC++\\FTB\\Files\\fileName");

    if(inFile.bad())
    {
        cout<<"\ Error in Opening file... ";
        exit(1);
    }
    cout<<"\n The content from the file "<<fileName <<" is : "<<endl;
    while(inFile.eof() == 0)
    {
        inFile.get(ch);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch =='O' || ch == 'U')
            nvowel++;
        else
            ncon++;
    }

    cout<<"\n The number of vowel  : "<<nvowel;
    cout<<"\n The consonants : "<<ncon;
    return 0;
}
*/
