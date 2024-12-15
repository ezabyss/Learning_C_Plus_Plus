//Class Template
/*
A class template is a kind of class which has members of template type. Class templates are associated with generic types and they can use some specific types as well. But each object of sch class must be of some speciifc size. Therefore, the data_type must be specified before creating an object of the template class. This is done by specifying specific data-type as parameter when object is created for the template class. Thus, template classes provide mechanims for creating applications with generic types, which are common applications such as linked lists, stacks, and queues etc. The general format for class template is :
step1: Defining template
        template <class T>
step2: Defining class with members of template type
        class class_name
        {
            //class members with data types T whenever appropriate
        }
step3: Defining object
        class_name <specific_data_type> object_name

*/

//WAP to illustrate class template
#include <iostream>

using namespace std;

//My Way
/*
template <class DT>
class Rectangle
{
    DT length,breadth;
public:
    Rectangle(DT l, DT b)
    {
        length = l;
        breadth = b;
    }
    DT Area()
    {
        return 2 * (length + breadth);
    }

};

int main()
{
    Rectangle <float> R(39.3, 55.5);
    Rectangle <int> Ri(7,3);

    cout<<"\n Area of Rect having float number : " << R.Area();
    cout<<"\n Area of Rect having integer number : "<< Ri.Area();


    return 0;
}
*/
//Book Way

template  <class T>
class Rectangle
{
private:
    T First, Second;
public:
    Rectangle()
    {
        First = Second = 0;
    }
    Rectangle(T x, T y)
    {
        First = x;
        Second = y;
    }
    T Area()
    {
        return First * Second;
    }
};
int main()
{

    Rectangle <int> reci(5,7);
    Rectangle <float> recf(3.5,6.8);

    cout<<"\n Area with Integer dimension : " << reci.Area();
    cout<<"\n Area with Float   dimension : " << recf.Area();

    return 0;
    /*
    In this example, the class Rectangle has data members and function members of generic type. The statement: Rectangle <int> reci(5,7); specifies reci object for int type members such that T is replaced by int. Similarly, Rectangle <float> recf(3.5, 6.8); specifies recf object for loat type members such that T is replaced by float in class definition.
    */
}
