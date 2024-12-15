//Introduction to Exceptions
/*

An exception is an abnormal  condition that arises in a program at run time. Thus, exception is run time error. Let us consider the following program.
*/
//program without exception handling
int main()
{
    float a, result;
    cout<<"\n Enter a number : ";
    cin >> a;
    result = 100/a;
    cout<<"\n The Result is : "<< result;

    return 0;
}
/*
The above program is correct in normal situation. It asks for a number and provides result dividing 100 by the number. But sometimes it can cause an error at run time if user gives zero as input value. When user enters 0 as input value, the program generates exception. It is called exception because the program generates such type of error in abnormal conditions only (i.e. no error in normal condition).
We should analyze any abnormal behavior that could be caused by user entering wrong information that could otherwise lead to unpredictable results. An error result or an unpredictable behavior of program not caused by operating system but that occ- Bad memories comesurs in program is called an exception. C++ has mechanism to handle suc type of error. The ability  to deal with a program's eventual abnormal behavior is called exception handling. Exception handling is a mechanism that separates code that detects and handles exceptional circumstances from rest of the program.

The exceptional situation is represented with an object. This object is called an exception object When a program encounters an exceptional condition , It is important to identify and deal with the condition. Exception handling mechanism is responsible to detect and report exceptional circumstances so that appropriate action can be taken. Some abnormal conditions that may arise in a program are:
1) Dividing a number by zero [Divide By Zero];
2) Short of Memory
3) Trying to open non-existing file for read only mode.
4) Exceeding index of the array from its size[Array Index Out of Bounds]
5) Attempting to initialize an object to an impossible value
*/
//Exception Handling Model
/*
When and exception condition arises in a program code, an object representing that exception is created and thrown to a separate block or function where the exception is handled. The error handling mechanism performs the following tasks.

a. Find the problem( Hit the exception).
b. Inform that an error has occurred ( Throw the exception).
c. Receive the error information(catch the exception).
d. Take corrective actions ( handle the exception).


C++ provides a systematic object oriented approach for handling exceptions The exception mechanism of C++ uses keywords throw, catch and try.

            Try Block( Detects and Throws)

            Catch Block(Catches and handles the

              //new statement of catch block

*/
//Try Block
/*
A try block encloses a block of code for which particular exceptions will be analyzed and detected. It's followed by one or more catch blocks. Thus, try block encloses the code that we want to monitor for exceptions. The try block doesn't define how we're going to handle the exception but it merely tells the program, " If You see an excepting in the following code, grab it". If try block detects exception, the exception is thrown to catch block using throw keyword and program control also transfer to catch block. Once the control transfer to catch block. it never returns to try block. If no error is found within try block .The control never goes into catch block
try
{
    //code to monitored for exception
}

*/
//Catch Block
/**
A program catches an exception with an exception handler at place in a program where we want to handle the problem. The catch keyword indicates the catching of an exception. The catch block specifiers exception type that we wish to catch. WE can define multiple catch blocks to catch different types of exceptions. Every try block must have at least one catch block imimediately following it. Once an exception is thrown, program control transfers from the try block into catch block. Within catch block, the corrective action is taken and once the catch block has been executed, program control continues with the next line in the program following the entire try/catch block. The program  control never
 goes into catch block if there is no exception occurred within try block.


Syntax:

catch (Exception_Type Exception_object)
{
//Block of statements that handles the exception.
}
*/
//Throw Block
/**
An exception is thrown to a particular catch block using throw keyword. It can throw object of different types, known as exception objects.

When the try block throws as exception, the program control leaves the try block and enters into statements of catch block. Note that exceptions are objects used to transmist information about a problem. If type of object thrown in try lock matches the argument type in the catch statement, Then catch block is executed for handling the exception. If they donot match, the program is aborted with the help of abort() function which is invoked by default. When no exception is detected and thrown, the control goes to the statement immediately after the catch block. That is, the  catch block is skipped.
                        */
