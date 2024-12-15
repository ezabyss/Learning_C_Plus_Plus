Inheritance is a process by which new classes called Derived Classes are created from existing classes called Base Classes. The derived classes have all the features of the base class and the programmer can choose to add new features specific to the newly created derived class.

For example, a programmer can create a base class named Fruit and define derived classes as Mango, Orange, Banana, etc. Each of them has some common characteristics like taste, price and season. The common characteristics are written in base class attributes or features specific to these newly created derived classes. Mango would have its own defined features, Orange would have its own defined features, Banana would have its own defined features, etc.
When creating a class, instead of writing completely new data members and member functions, the programmer can design such that the new class inherit the members of an existing class, instead of writing completely new data members and member functions, the programmer can design such that the new class inherits the members of an existing class. This existing class is called the base class, and the new class is referred to as the derived class.


* Advantages of Inheritance

1. Reusability : inheritance helps to reuse the previously written code. The base class is defined and once it is compiled , debugged and tested. Using the concept of inheritance, the programmer can create as many derived classes from the base class as needed while adding specific features to each derived class as needed.

2.  saves time and effort: The concept of reusability achieved by inheritance saves programmer's time and effort

3. Extendibility (enhancement) of the code: Without changing the ase class, we can add some more methods and features in derived class to extend the program. We can add any number of derived classes t o upgade the functionality of the program.

//Base classes & Derived Classes

The existing class from which another class  class is derived is nown as base class and the new created class is derived class. A base class may be a direct base class of a derived class, or an indirect base class of a derived class. The base class is also known as parent or super class. Similarly, the derived class is also known as child or sub class. The general forms of defining a derived class is:

Syntax:
class base_class_name
{
};
class derived_class_name : visibility_mode base_class_name
{
code for specific features of derived class;
};


Example:

class ABC
{code for base class
};

Then, a derive class XYZ can be created as following:
class XYZ : private ABC
{specific code for class XYZ
};

In syntax of deriving child class from parent class,  the colon indicates that the derived_class_name is derived from the base_class_name. The visibility_mode is optional and if present may be either private or public or protected. The default visibility mode is private. Visibility mode specifies whether feature of the base class are derived in private or public or protected mode.

Note: Te protected members can be accessed from within class itself and its child class. Thus, they are like private member but the exception is that they can be accessed from child class also;

//Visibility Modes

private Mode

when a base class is inherited by a derived class in private mode public and protected members of base class become private members for derived  class and therefore they are accessible only within derived class i.e the public and protected members in base class act as private members for the derived class. The private members of the base class are not inherited in derived class.

Public Mode

When a base class is inherited by derived class in public mode, public members of base class becomes public membres for the derived class and protected members of the base class become protected members for derived class. The private members of the base class are not inherited in derived class.

Protected Mode

when a base class is inherited by derived class in protected mode, the public and protected members in the base class become protected members for the derived class. The private members of the base class are not inherited in derived class.


//Types of inheritance
1. Single Inheritance
2. Multilevel Inheritance
3. Hierarchical Inheritance
4. Multiple Inheritance
5. Hybrid Inheritance

1. Single Inheritance

When a single class is being inherited  by a class, it is called single or simple inheritance. In other words, a derived class with only one base class is called Single inheritance. Single inheritance is an ability of a derived class to inherit the member functions and variables of the existing base class. A derived class is defined as following.
syntax:

class Derived_Class_Name: Inheritance_Mode Base_Class_Name
{
class body
};
where,
* class is keyword
* Derived_Class_Name is name of the derived class to be defined
* colon indicates inheritance
* Inheritance_Mode is type of derivation either public or protected or private
* Base_Class_Name is name of base class already defined in the program whose features are going to be shared in derived class;

            Person -> Employee : Single Inheritance

2. Multilevel Ineritance

In Multilevel Inheritance, a class is derived from another derived class. Thus, base class of a derived class is aslo derived of another base class. An Example class Result is derived class of Examnatin, which is again derived of class student.

Student -> Examination -> Result


3. Hierarchical Inheritance

It is the process of deriving two or more classes from single base class. And in turn each of the derived class can furhter be inherited in the same way. thus it forms hierarchy of class or a tree of classes wich is rooted at single class
Syntax:
    class A
    {
        ---
    };
    class B : visibility_mode A
    {
        ---
    };
    class C : visibility_mode A
    {
        ---
    };

    Person -> Student , Person -> Employee



    4. Hybrid Inheritance

    The use of more than one type of inheritance is called hybrid inheritance. It is used n such situations where we need to apply two or more types of inheritance to design a program.
    Person -> Student , Person -> Employee : //Hierarchical inheritance
    Student -> Examination -> Result; //Multilevel Inheritance.

**********************************************************************

Function Overriding

When a function ,defined in the base class, is redefined in the derived class to fit its own needs, it is called function overriding. Function overriding contains a function in the derived class which has the same name and argument types as the function in the base class but the definition is different, In other words, function overriding is the use of two or more functions having same name with same signature but defined one in base class and other in derived class. In c++, function overriding is achieved by using virtual functin where the declaration of the function in the base class to be overridden is preceded by the keyword virtual. The concept of virtual function will be illustrated in later chapter.

*When a function with same name and signature is definedin base class and derived lcass, probelm of ambiguity arises. When thefunction is called with the help of object of derived class, then the question airses: " which version of thefucntion is classed?". The problem is resolved by using scope resolution operator(i.e.::). By Default   derived class, derived class gi es proority to the function defined within it. So, base class version of the function is overridden by derived class version .To call base class version using object of d erived class, we use socpe resolution operator. This process is aslo call ambiguity Resolution  in inheritance.
