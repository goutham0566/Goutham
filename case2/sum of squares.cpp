
/*Name of the program:finding the formula for given expression.
and write the program for Input.
filename:sum of squares.cpp
date:10-04-2020
Author:Goutham
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
/*function name:square
input parameter:int
output parameter:int
*/
int 
square(int in)
{
int Res;
Res=(in*(in+1)*(2*in+1))/6;	//formula for given expression
return Res;			//return sum;
}

int main(int argc,char**argv)
{
int i,j;
//this is for dispalying the usage of program
if(argc==1)
cout<<"usage:./a.out arg1(arg1 should be int value)"<<endl;
else
{
i=atoi(argv[1]);	//converting stringtoint
j=square(i);		//calling square function
cout<<"output:"<<j<<endl;	//for displaying output
}
}
