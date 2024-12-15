//Direct Random Access in File

The reading and writing install previous programs was sequential. While reading data from a file, the data items are read from beginning of the file in sequence until end of the file. Similarly, while writing data to a file, data items are placed one after another in a sequence. But it is necessary some time to access data items in file randomly without moving sequentially. We can access a particular data item placed in any location without starting from the beginning. Such type of access to a data item is called direct or random access. For random access in a file, we have to know the concept of file pointer. There are two types of file pointer: get pointer and put pointer. With help of these two pointers, we can move file cursor in particular location and perform read or write operation at that place. Using concept of random access, we can search, edit , delete or move particular record stored in a file.

//File POINTERs: get pointer and put pointer

The ifstream class has a pointer as the get pointer that points to an element to be rad in the next input operation. similarly, ofstream class has a pointer known as the put pointer that points  to a location where the next element has to be written. The class fstraem, inherits both the get and the put pointers from ifstream and ofstream. The get pointer and put pointer are used to move cursor through files while reading or writing. The input(get) pointer is used for reading contents of given file and the output (put) pointer is used for writing to a given file. When a file is opened in read only mode, The get pointer is automatically set at the begining of the file such that we can read content of the file from the beginning. similarly, when a file is opened in write mode, the existing contents are deleted and put pointer is set at the beginning of the file such that data is written to the file from beginning. Again when file is opened in append mode, put pointer is set at the end of the file and data is written to file from end of the file. Thus , get pointer is actually cursor for reading purpose and put pointer is cursor for writing purpose. the reading and writing process starts in the file from the point  pont where get and put pointer is set. There are functions like seekg(), seekp() tellg() for manipulation of these file pointer. These  functions are used to move appropriate cursor at particular location for random access in a file.

1)seekg()
     The seekg() is a member function of istream class and it moves get pointer to a specified location. The reading operation starts from that location. The particular location is specified by its two arguments. It can be illustrated by its syntax:

     stream_object.seekg(offset, reference_position);

     where offset specifies the number of bytes the file pointer is to be moved from the location specified  by the other argument reference_position. The reference_position  takes one of the following constants defined in ios class:

     ios::beg->beginning of the file
     ios::cur->current position of file
     ios::end->end of the file

     The ios:: beg, ios::cur and ios::beg are actually buit-in constant and we can use 0,1 and 2 resp.


     eg:
a) seekg(10,ios::beg) i.e moves the get pointer by 10 bytes from the beginning
b) seekg(10,ios::cur) i.e moves the get pointer by 10 bytes from the current position of the pointer.
c)seekg(-5,ios::end). i.e moves the get pointer backward by 5 bytes from the end of the file\

d)seekg(0,ios::end). i.e moves the get pointer at the end of the file.

e)seekg(0,ios::beg). i.e moves the get pointer at the beginning of the file


2) seekp()

    The seekp() is a member function of ostream class and it moves put pointer to  specified location. The specified location is specified by its arguments like in seekg() function. Its Syntax is :
    stream_object.seekp(offset,reference_position);

    wher offset specifies the number of bytes the put pointer is to be moved from the location specified by the other argument reference_position.

   Example:
a) seekp(20,ios::beg) i.e. moves the put pointer by 20 bytes from beg92323260inning of the files.

b) seekp(10,ios::cur) i.e. moves the put pointer by 10 bytes from current position of the pointer.

c) seekp(-5,ios::end) i.e. moves the put pointer backward by 5. from the end of the file.



3) tellg()

This is the member function of istream class and it gives or returns the current position of the get pointer.
Its syntax is:

    int_variable= stram_object.tellg();

4) tellp()

This is the member function of ostream class and it give or returns the current postion of the put pointer..
It's Syntax is :
    int_variable = stream_obj.tellp();
