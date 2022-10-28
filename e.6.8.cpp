*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E6.8

I wrote a program that checks whether two arrays have the same elements in the same order
*/


bool equal(int a[],int a_size,int b[],int b_size)
{
if(a_size!=b_size) 
return false;
else
{
for(int i=0;i<a_size;i++)
{
if(a[i]!=b[i]) 
return false;
}
return true;
}
  return 0;
}
