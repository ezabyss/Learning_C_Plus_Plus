//setf()
/*
    This is another member function of ios class which is used to set various flags used for formatting flag specifies the action required for formatting the output. The second argument argument2 is nown as bit field that specifies the group to which the formatting flag belongs. The following table show various flags and bit fields used for formatting output.

/------------------------|-------------------|--------------------\
| DESCRIPTION oF FORMAT  |    FLAGS          |  BIT FIELD         |
|------------------------|-------------------|--------------------|
| left  Justified output | ios :: left       |  ios :: adjusted   |
| Right Justified output | ios :: right      |  ios :: adjusted   |
| Padding after sign     | ios :: internal   |  ios :: adjusted   |
|------------------------|------------------=|--------------------|
| Scientific notation    | ios :: scientific |  ios :: floatfield |
| Fixed point notation   | ios :: fixed      |  ios :: floatfield |
|------------------------|-------------------|--------------------|
| Decimal base           | ios :: dec        |  ios :: basefield  |
| octal   base           | ios :: oct        |  ios :: basefield  |
| Hexadecimal base       | ios :: hex        |  ios :: basefield  |
|________________________|___________________|____________________|
 */
 //WAP to use different flags for formatting output text

 #include <iostream>
 using namespace std;

 int main()
 {
     int num= 45;
     cout.fill('*');
     cout<<"\n\n Output in Right Justified.... \n"<<endl;

     cout.setf(ios::right,ios::adjustfield);

     cout.width(30);
     cout<<" Ram Prasad Sharma.";

     cout<<"\n\n Output in left Justified.... \n"<<endl;
     cout.setf(ios::left,ios::adjustfield);

     cout.width(30);
     cout<<" Ram Prasad Sharma.";

     cout<<"\n\n Number value is : "<<num;
     cout.setf(ios::oct,ios::basefield);
     cout<<"\n setf(ios::oct,ios::base field) : ";
     cout<<num;

     cout.setf(ios::hex,ios::basefield);
     cout<<"\n setf(ios::hex,ios::basefield) : ";
     cout<<num;

     return 0;
 }
