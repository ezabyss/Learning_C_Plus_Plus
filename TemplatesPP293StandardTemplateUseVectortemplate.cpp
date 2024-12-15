//WAP to use vector template and its member functions to store integers.

#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
   vector<int> nums; //vector container for integer elements

   for(int i =1;i<=6;++i)
   {
       nums.push_back(i);
   }
   //display all elements followed by a space

   for(int i= 0;i<nums.size();++i)
   {
       cout<< nums[i] << ' ' ;
    }
    cout<<endl;
}
//In this example, we used vector template which is defined in vector.h header file. Using vector template, we are defining an object nums and using member function push_back() to insert number in the list. The member function push_back() is already defined with in vector template. So, it doesn't need to define again and we can use it using object of the vector class.)
