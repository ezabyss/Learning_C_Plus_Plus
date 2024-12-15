File Input/Output

A file is a collection of related data stored in a particular location on the disk. A file has specific extension like .doc, .ppt, .xls, .txt, .dat etc. The main function of a file is to store text or data permanently such that we can access the data at any time. We can write programs to create files and perform the read and write operations on these files. There are two types of file in C++.
1) Sequential Files
2) Random Access Files

In sequential files, the data will be stored or read back sequentially (from top to bottom). In random access file, data can be accessed and processed randomly(i8.e moving the file pointer directly to any location oin the file instead of moving sequentially).

The I/O stream of C++ handles file operation which are similar to console I/O operations. The console I/O operation reads data from keyboard and writes(or displays) in screen while file I/O operation reads/writes data from/to a file. We can write a program such that input stream extracts (or reads) data from file and the output stream inserts (or writes data to the file. For this, C++ has various stream classes.)

//Classes for operations with Files

The I/O system of C++ contains a set of classes that defines file handling methods. The main classes are: ifstream, ofstream and fstream. A file stream(i.e object) can be defined using these classes. The class to be used depends upon the objectives of the program i.e whether we want to read data from the file or write data to it. It can be summarized as follows.

1) ifstream class: it is used to define a file stream to use for reading data from file.i.e if we want to read data from a file, we create object or file stream of ifstream class.

2)  ofstream class: it is used to define a file stream to use for writing data to file ie. if we want to write data to a file, we create object or file stream of ofstream class.

3) fstream class: it is used to define a file stream to use fro reading as well as writing data from/to a file ie. if both operations: reading & writing in a file is needed, we create object of file stream of fstream class

// Steps in processing a file

When we use file in computer system for reading writing purpose, we have to perform some activities. First, we open file(For example: select existing file->right click->open) and then read its content or write some text to it in computer system. finally, we close the file to complete the process. Similarly, C++ program use same steps to perform input/output operations in a file. They're
1) Opening file
2) Operation (i.e reading or writing) on a file
3) Closing a File

Opening and Closing a File

    Before a program can write to a file or read from a file, The program must open it. Opening a file establishes a link between program and operating system . This provides operating system the name of file and the mode in which the file is to be opened.
    In C++, we c++ an open a file in two methods.

1 ) Using Constructor of File-related Stream Class
2 ) Using Member Function open() of  the Stream Class

    When input and output operations on a file are completed, we shall close it so that is resources become available to the system again. In order to do that we have to call the stream's member function close(). This member function takes no parameters, and flushes the associated buffers and close the file.

    stream_object.close()

        Once this member function is called, the stream object can be used to open another file, and the file is available again to be opened by other processes. The destructor automatically calls member function close() implicitly when file stream object is destructed even user don't use close() explicitly.

a) Open a file using constructor of the file-related stream class

It is known that constructor is used to initialize an object of a class. A constructor of ifstream, ofstream ofstream class can be used to create a stream object & initialize their data member and open a file. The filename is passed as argument in constructor to initialize  file stream object. File stream object is created using the appropriated class. The class ofstream  is used to create output stream. ifstream is used to create input stream and fstream create both input and output stream object.
Syntax:
    stream_class stream_object(Filename, Mode);
Where Filename is name of the file to be opened and mode is an optional parameter which includes folowing flags or constants:

1) ios::in
        opens file for input operations(i.e input mode)
2) ios::out
        opens file for output operations(i.e. output mode)
3) ios::app
        opens file in append mode. All output operations are performed  at end of the file, appending the content to the current  content of the file. this flag is used to open for output>only operation.

4) ios::binary
        Opens file in binary mode

5) ios::ate
        Opens a file and set initial position of file pointer at end of the file. If the flag is not set to any value, the initial position is the begining of the file .

6) ios::trunc
        if already existing file is opened for output operation, its previous content deleted and replaced by new one.

7) ios::nocreate
        open fails if specified file doesn't exist
8) ios::noreplace
        Opens existing  ilfe without replacing it.

        Ther, ios::app and ios::ate both set initial position of file pointer at the end of file. The difference is that the ios::app allows us to add data at the end of file only.
        while ios:;ate allows us to add data or to modify existing data anywhere in the file by changing file pointer depending upon our choice.

        All These flags can be combined using bitwise 'or' operator(i.e |) For example, if we want to open the file test.dat in binary mode to add data, we can do it by the following mode.

        ofstream myfile("test.dat", ios::out | ios::app | ios::binary);

Example:
    ofstream out("welcome.txt");
    ifstream in("d://college//oop.txt");
    fstream in_out("myfile.txt",ios::in || ios::out);

    The first open a file named welcome.txt for writing. As of ofstream is class responsible for writing data to a file, it is not necessary to include file opening mode as second argument(i.e. by default, it is known).

    Similarly, the second example opens a file oop.txt, stored in folder, College of D:\ drive. It is important to remember that we have to use double slash(i.e \\) to specify full path of the file. If full path is not mentioned, then the file will be created in output directory(i.e c:\tc\bin\ in case of Turbo C++).

    Again, third example opens a file myfile.txt in input as well as output mode. We know that the class fstream is responsible for reading as well as writing data files. so we must specify file modes in this case.


b) using member function open() of file stream classes
        The stream claszes ifstream, ofstream and fstream contain a member function open(). We can use this functino to open flies using following syntax

        File_stream_class stream_object;

        where Filename is name of file to be opened and Mode specifies various file opening modes as described in previous section

    Example:
            ofstream out;
            out.open("A:\Programming Task\StartingC\StartingC++\FTB\Files\marks.txt");


            out.close();

        --------------------------

            ifstream in;
            in.open("A:\Programming Task\StartingC\StartingC++\FTB\Files\marks.txt")

            in.close();

        --------------------------

            fstream input;
            input.open("A:\Programming Task\StartingC\StartingC++\FTB\Files\marks.txt",ios::in);

            input.close();




