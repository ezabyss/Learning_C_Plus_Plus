
// WAP to use static data member in a class to count the number of times a member function is called.

#include <iostream>
#include <iomanip>

using namespace std;

class Book
{
private:
    static int cn;
    float id;
    char name[10];

public:
    void ReadData()
    {
        cout << " \n Enter Book ID: ";
        cin >> id;

        cout << "\n Enter Book Name : ";
        cin >> name;

        cn++;
    }
    void Display()
    {
        cout <<endl <<setw(5)<< id <<setw(20)<<name <<endl;
    }
    void DisplayCount()
    {
        cout << " \n The Number of times ReadData is called is : " << cn <<endl;
    }

};
int Book::cn;
int main()
{
    Book b1, b2, b3;;

    b1.ReadData();
    b1.DisplayCount();

    b2.ReadData();
    b2.DisplayCount();

    b3.ReadData();
    b3.DisplayCount();

    cout<<endl<<setw(5)<<" ID"<<setw(20)<< "Name" <<endl;
    cout<<"------------------------------"<<endl;
    b1.Display();
    b2.Display();
    b3.Display();

    return 0;
}
/*
In this example, there is a static member variable cn within class definition. This static variable is shared by all objects (here 3 objects) and when each object calls ReadData() Member function, its value is incremented by one, initially, it is assigned to zero automatically.

So, the static variable cn counts the number objects invoking ReadData() member function. The important point to be remembered is that static member variable must be defined outside the class definition.
*/





/*
Data member of ta class can be qualified as static. A static member variable has following special characteristics

1. It's initialized to zero when the first object of its class is created. No other initialization is permitted.

2. Only one copy of that member is created for the entire class and it is shared by all the objects of that class, no matter how many object are created. So, it can be used to count number of objects of a class.

3. It's visible ony within the class if declared as private, but its lifetime is the entire program.

4. Static variables are normally used to maintain values common to the entire class.

*/
