/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E6.8

I wrote a program that checks whether two arrays have the same elements in the same order
*/


#include<iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size){
if(a_size != b_size) 
return false; 
int i;

for(i=0;i<a_size;i++){ 
if(a[i]!=b[i]) 
return false;
}
return true; 
}

int main()
{
int a[5]={5,4,3,2,1};
int b[5]={5,4,3,2,1};
cout<<equals(a,5,b,5);
return 0;
}
