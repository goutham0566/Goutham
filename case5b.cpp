#include<iostream>
using namespace std;
class TEACHER
{
	int x;
public:
	TEACHER()
	{
	cout<<"In teacher constructor"<<endl;
	}
	virtual ~TEACHER()
	{
	cout<<"In teacher desctructor:"<<endl;
	}
};
class STUDENT:protected TEACHER
{
	public:
	STUDENT()
	{
	cout<<"STUDENT constructor"<<endl;
	}
	~STUDENT()

	{
	cout<<"STUDENT desctructor"<<endl;
	}
};
int main(int argc,char  **argv)
{
	 
    if(argc==2)
	{
	cout<<"usage: ./a.out"<<endl;
	cout<<"This program gives description of orderof constructor and destructors execution"<<endl;
	}
    else
	{
	TEACHER *p=new TEACHER();
	STUDENT *q=new STUDENT();
	}
}
