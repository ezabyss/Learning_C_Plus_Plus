//Class Template with multiple parameters(i.e different type of members)
/*
We can define a class template with mor than one generic data types. They are declared as comma separated list in template specification as following
step1 : Defining template
        template<class T1, class T2 ,... >
step2 : Defining object
        class_name <specific_data_type_for_T1,
        specific_data_type_for_T2,...> object_name;
*/
//WAP to illustrate the use of class template with different types of members.

#include <iostream>

template <class T1, class T2>

class Distance
{
private :
    T1 feet;
    G2 inch;
public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(T1 x, T2 y)
    {
        feet = x;
        inch = y;
    }
    void Display()
    {
        cout<<"\n The Distance is : "<< feet<<"\'"<<inch<<"\"";
    }
};

int main()
{
    Distance <int,float> dist1(5,6.512343);
    Distance <int, int> dist2(3,8);

    dist1.Display();
    dist2.Display();

    return 0;

    /*
    Here, the class Distance has two generic types T1 and T2. We can provide any types for T1 and T2 while creating object of the class. For object dist1, we provided int for T1 and float for T2. Similarly, for object dist2, we provided int for both T1 and T2 type.
    */
}
