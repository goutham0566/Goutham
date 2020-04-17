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
	      int width;
	      int height;
public:
		void set_values(int a,int b)
		{
		width=a;
		height=b;
		}
		int find()
		{
		return(width *height);
		}
		friend Rectangle calculate(Rectangle);

};
Rectangle calculate(Rectangle d)
{
 Rectangle rectres;
  rectres.width=d.width*2;
  rectres.height=d.height*2;
	return rectres;
} 
int main(int argc ,char **argv)
{
	//declaration of object for rectangle class
        Rectangle rect,rectb;
	if(argc==2)
	{
	cout<<"./program.exe "<<endl;
	cout<<"private access specifiers intialization"<<endl;
	}
	else
	{
	//accessing calculatearea function
	rect.set_values(6,7);
	rectb=calculate(rect);
	cout<<"res:"<<rectb.find();
        return 0;
	}
}
