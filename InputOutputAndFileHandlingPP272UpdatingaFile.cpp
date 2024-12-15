/* The updating a data file is frequent task in file handling. The process of updating would include one or more of the following tasks:

a) Displaying the contents of a file.
b) Modifying an existing item.
c) Adding a new item.
d) Deleting an existing item.

These actions require file pointer(i.e. either get pointer or put pointer) to move to a particular location that corresponds to the data item or object under consideration. This can be easily implemented if the file contains a collection of data items/objects of equal lengths. In such cases, the size of each object or data item can be obtained using sizeof operator.)

int object_length = sizeof(object_name);

The location of desired particular object may e obtained as

int locations = m * object_length;//for math object;

where location gives the byte number of the first byte of the math object and object may be counted as 1st, 2nd, 3rd & 4th so on. Now we can move put pointer or get pointer at starting location of particular object  and perform writing or reading operation from that location.
The number of objects in a file can be calculated by setting put pointer at the end of the file and using tellp() function as:
outfile.seekp(0,ios::end); // set put pointer at end of the file
int file_size = outfile.tellp()

Here, tellp() returns position of the put pointer and gives total number of bytes in the file. Then, the total number of object can be obtained as
 int n= file_size/object_length
