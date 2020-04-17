 /*
filename: 4.cpp
details:to find the purpose and difference in public,private and protected access specifiers
author:Goutham 
date:09/04/2020
*/
#include <iostream>
using namespace std;

class base
{
 	private:
        int a;

 	protected:
 	    int b;

 	public:
 	    int c;

 	base() //constructor to initialize data members
 	{
 		cout<<"enter the value of a :- "<<endl;
 		cin>>a;
 		
 		cout<<"enter the value of b :- "<<endl;
 		cin>>b;
 		
 		cout<<"enter the value of c :- "<<endl;
 		cin>>c;
 		
 	  
 	}
};

class derive: public base
{
 	//b is protected and c is public members of class derive
 	public:
 	    void showdata()
 	    {
 	       cout << "a is not accessible" << endl;
               cout << "value of b is " << b << endl;
                 cout<<"value of c is " <<c<<endl;
        }
};

int main(int argc,char *argv[])
{
	if(argc>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"		or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{
		 derive x; //creating object to the class a
     x.showdata();
    
     return 0;
} 	//end of program
	}
