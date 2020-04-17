#include<iostream>
using namespace std;
class vehicle
{
int noofwheels;
public:
	vehicle()
	{
	cout<<"vehical class constructor"<<endl;
	}
	vehicle(int x)
	{
	cout<<"Inparametrised vehicle constructor"<<endl;
	noofwheels=x;
	}
	~vehicle()
	{
	cout<<"vehicle class destructor"<<endl;
	}
};
class car:public vehicle
{
string Name;
public:
	car()
	{
	cout<<"car class constructor"<<endl;
	}
	car(string Name)
	{
	cout<<"In car class parametrised constructor"<<endl;
	this->Name=Name;
	}
	~car()
	{
	cout<<"car class destructor"<<endl;
	}
};
class bus:public vehicle
{
int noofseats;
public:
	bus()
	{
	cout<<"bus class constructor"<<endl;
	}
	bus(int noofseats)
	{
	cout<<"bus parrametrise constructor"<<endl;
	this->noofseats=noofseats;
	}
	~bus()
	{
	cout<<"Bus destructor"<<endl;
	}
};
int main(int argc,char **argv)
{
    if(argc==2)
	{
	cout<<"usage: ./a.out"<<endl;
	cout<<"This program gives description of orderof constructor and destructors execution"<<endl;
	}
	else
	{
	vehicle vl(4);
	car cl("nano");
	car c2;
	bus bl(20);
	bus b2;
	}
}

	
