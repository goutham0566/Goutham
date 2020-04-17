 /*
filename: 3.2.cpp
details:To see the modifiers types
author:Goutham 
date:09/04/2020
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

	// declaring varible 
    signed p; 
    unsigned q;
     int  x = -1; 
     unsigned short r;	
	signed short a;		
    
    
// main function
int main(int argc,char *argv[])
{
	// declaring varible signed short
	
    if(argc>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"		or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{		
		 cout << "The size of p is " << sizeof(p) <<endl; //the conversion below
		 cout << "The size of q is " << sizeof(q) <<endl; 
		 cout << " unsigned short = " << r << endl;
		cout << " signed short = " << a << endl;
		 cout << "x is "<< x  << endl; 
		 
		return 0;
	} 
}
 
