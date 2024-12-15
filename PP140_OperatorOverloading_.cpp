/*
Introduction to operator overloading:

The use of an operator for different purposes in different data types is known operator overloading.C++ provides mechanism to make user-defined data type behave in much the same way as the built in data types. For eg. C++ permits us to add two variables of user-defined types with the same syntax that is applied to the basic types .This means that the ability to provide the operator with a special meaning for a data type. the mechanism  giving such special meanings to an operator is known as operator overloading.

for e.g. the following code is obvious in C++,
    int a = 10, b =30, c;
    c = a+b;

    Here, '+' operator adds values of two variables a & b of basic data types(i.e. int, float, double, long , long double, char etc are basic data type The C++'s operators +, -, *,/,<,>,=,++,-- etc are designed to operate only on standard data types. Thus, the operator '+' can be used to perform the addition operation on data types: int, float, char, double, long double.  let us assume that there is a class called Distance which has data members: feet and inch
                                                                               Let us consider the following example.

*/

#include <iostream>

using namespace std;

class Distance
{
private:
    float feet,inch;
public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(float f, float i)
    {
        feet =f;
        inch =i;
    }
};

int main()
{
    Distance D1(3,5),D2(6,9),D3;

    D3 = D1 + D2;


    return 0;
}

/* the operator '+' has been used to add two Distance expressed in feet and inch(i.e two objects of class Distance). By default, the '+' operator cna't add two objects of user-defined class. Thus using '+' operator in statement: d3= d1 +d2; is illegal structure operation. but C++ provides mechanism to define operator function such that he operator can act on user defined data tpes also and make such type of operation(i.e. D3 = D1+D2;) legal. The use of '+ operator for two objects of class instead of basic data types means giving special meaning to '+' operator and such type of mechanism is known as operator overloading. similarly, using concept of operator overloading, we can use '+' operator to concatenate two strings, to add two complex numbers or to add two objects of any class.

C++ overloads only existing operators i.e it doesn't allow new operators to create. The existing operators are overloaded to act them on objects of class and provide meaning appropriate to the object type.
Thus, operator overloading contributes to extensibility of the C++ program. It is used to perform the same or similar function or job on class objects as the operators perform on variables or values of built-in data types.
*/

/*
Defining Operator overloading
An operator overloading is defined using a special function, called operator function, which describes the task to be donw by the operator. The syntax for operator function is:
return_type operator existing_operator(arguments);

Where operator is keyword and existing_operator iis any valid operator to be overloaded. Thus, Operator existing_operator is name of the operator function. The actual task/job o f the operator for objects of specific class is defined within body of this function.

Operator function may be either member function or friend function of a class. The number of arguments for operator function depends on type of operator either t is unary or binary and type of the function it it is member function or friend function.
1) The operator function defined as friend function will have only one argument for unary operator and two for binary operator.
2) The operator function to be defined as member function of a class has no arguments for unary operators and one for binary operators.
*/
/*

Invocation of Operator Function

for Unary operators

    The operator function is invoked using following expression
    unary_operator object_of_class //pre-fix notation
    Or
    object_of_class Unary_operator //post-fix notation

    This is interpreted as
    i) For operator function defined as member Function
        object_of_class.operator unary_operator();

    ii) For operator function defined as Friend Function
        operator unary_operator(object_of_class);

    EG:
        ABC ob; // Definition of object ob of class ABC

        Now we can use ++ operator for the object ob as
        ++ob; // or ob++;
        Then, ++ob is equivalent to
        i. ob.operator ++() for member function;
        ii. operator ++(ob) for friend function;


For Binary Operators

    The operator function is invoked using following expression:
    object1 binary_operator object2

    The use of above expression is interpreted as

    i) For operatorfunction defined as member function:

    object1.operator binary_operator()(object2)

    ii) For operator function defined as friend function

    operator binary_operator(object1,object2);

    EG:
    ABC ob1,ob2;//Definition of object ob1 & ob of class ABC.
    Now we can use binary operator such as '+' can be used for objects ob1 & ob2 as Ob1+ob2;
    Then, ob1 + ob2 is equivalent to
    i. ob1.operator +(ob2) for member function and
    ii. operator +(ob1,ob2) for friend function

    */

    /*
    General rules on operator Overloading

    1) only existing operators(i.e predefined operators in the C++ ) can be overloaded i.e new operators such as $, @, ** etc can't be created.

    2) We can't redefine the meaning of operators when applied to built-in data type but we can redefine the original meaning of the operators when applied to user-defined data type(i.e object of class).

    3) the precedence and associativity of the opeartors can't be changed while overloading and it will be according to their use with built with their built-in types.
    similarly, the overloaded operators flow the syntax rules of the original operator. They can't be overridden.

    4)The overloaded operator must have at least one user-defined type operand

    5) The operator function declared as member function for unary operators takes no arguments and if declared as friend function, it takes onw argument. When unary operators are overloaded through a member function, the operand must be an object of the relevant class.

    6) The operator function declared as member function for binary operators takes one argument when unary operator overloaded through a member function. the left hand operand must be and object of the relevant class

    7) if a operator can be used as an both binary and unary operator (like + and -) we have to overload each separately

    8) The operator sizeof, ::(scope resolution), ?:(conditional) and .(*pointer to member) can't be overloaded.

    9) friend function can't be used to overload operator =, () ,[] and ->

    10) The operator function for overloading function can't have default arguments

    */

    /*
    Restriction of operator overloading

    8) The operator sizeof, ::(scope resolution), ?:(conditional) and .(*pointer to member) can't be overloaded.

    9) friend function can't be used to overload operator =, () ,[] and ->

    10) The operator function for overloading function can't have default arguments

    4. The Associativity and precedence of the operator can't be changed while overloading and it will be according to their use in built-in types.

    5. We can't change the number of operands that and operator takes.

    */
