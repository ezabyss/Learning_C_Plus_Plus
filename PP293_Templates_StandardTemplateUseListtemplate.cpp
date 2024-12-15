//WAP to illustrate the use of list template to insert data into list and display them in sorted order.

#include <iostream>
#include <list>
#include <string>
#include <conio.h>

using namespace std;

int main()
{

    list <string> l;
    l.push_back("ram");
    l.push_back("gita");
    l.push_back("krishna");
    l.push_back("hari");
    l.push_back("rita");

    l.sort();
    while(! l.empty())
    {
        cout<< l.front()<< " \n ";
        l.pop_front();
        }

    return 0;
}
