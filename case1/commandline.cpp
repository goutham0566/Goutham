/*Name of the program:parse the command line and dispaly the output
filename:commandline.cpp
date:10-04-2020
Author:Goutham
*/
#include<iostream>
#include<stdlib.h>
#include<typeinfo>
#include<bits/stdc++.h>
using namespace std;
/*function name:check
input parameters:string
return type:bool
*/
//function to check length of string is '1' 0r not
bool 
check(string sStr)
{
int i;
for(i=0;sStr.length()==1;i++)
{
return true;	//if the condition satisfifies it return '1'.
}
}
//main usig command line arguments.
int main(int argc,char *argv[])
{
int j,k;		//declaring integer variables
float fh;		//declaring float variable
if(argc==1)
{
cout<<"usage: ./a.out arg1 arg2 arg3 arg4"<<endl;
}
else
{
cout<<"type:"<<"\t"<<"value"<<"\t"<<"sizeof"<<endl;
for(j=1;j<argc;j++)
{
k=atoi(argv[j]);		//atoi convert ascii to int
fh=atof(argv[j]);		//atof convert ascii to float

if(k==0)
{
	if(check(argv[j]))	//if condition satisfies means it will print char
	{
	cout<<"char";
	cout<<"\t"<<argv[j]<< "\t"<<sizeof(argv[j])<<endl;
	}
	else		//it will print string
	{
	cout<<"string";
	cout<<"\t"<<argv[j]<< "\t"<<sizeof(argv[j])<<endl;
	}
}
else
{
if(k==fh)	//if condition  that stisfied means it will print int 
cout<<"int"<< "\t"<<k<<"\t"<<sizeof(k)<<endl;
else		//else it will print float
cout<<"float"<< "\t"<<fh<<"\t"<<sizeof(fh)<<endl;
}
}
return 0;
}
}
