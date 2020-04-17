/*
filename: 3-1.cpp
details:To find the difference between local and global
author:Goutham 
date:09/04/2020
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

// global variable 
int x=45; 

// variable accessed from 
void acces() 
{ 
   int x=50;
	cout<<"local value :- "<<x<<endl; 		//This x value can acceses only 
} 

// main function
int main(int arxc,char *arxv[])
{
    if(arxc>1) 
	{
		cout<<"\n Usaxe of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"			or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{	
	 
	   	acces(); 			 	// prints the variable inside the function local variable

		cout<<"global value:- "<<x;   //this prints the value of x that is xlobal variables
	
		
	} 
}
