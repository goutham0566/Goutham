/*Name OF PROGRAM:Initialisation of private variable in a class
filename:case5a.cpp
date:10-04-2020
Author:Goutham
*/
#include<iostream>
using namespace std;
class Rectangle
{ 
	//declaration int variable
              int Length;
	      int breadth;
	      static int iLen;
	      static int iBre;
public:
		/*function name:calculatearea
		return type:void
		input parameter:int ,int
		*/
              void calculatearea(int Length,int breadth)
              {
                  
                  int Area;
		  //calculating area of rectangle
		  Area=(Length*breadth);
                  cout<<"Area of rectangle:"<<Area<<endl;
              }
		/*function name:calculateperimeter
		return type:void
		input parameter:int ,int
		*/
	      void calculateperimeter()
		{
		int iPeri;
		iPeri=2*(iLen+iBre);
		cout<<"perimeter of rectangle:"<<iPeri<<endl;
		}
};
//private data member using scope resolution and assigning value.
     int Rectangle::iLen=90;
     int Rectangle::iBre=80;
int main(int argc ,char **argv)
{
	//declaration of object for rectangle class
        Rectangle rect;
	if(argc==2)
	{
	cout<<"./program.exe "<<endl;
	cout<<"private access specifiers intialization"<<endl;
	}
	else
	{
	//accessing calculatearea function
        rect.calculatearea(5,9);
	rect.calculateperimeter();
        return 0;
	}
}
