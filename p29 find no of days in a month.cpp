#include<iostream>
using namespace std;
int main()
{
	int m,y;
	
	cout<<"Enter month number :";
	cin>>m;
	cout<<"Enter a year :";
	cin>>y;
	
	if(m==1)
	{
		cout<<"January "<<y<<" has"<<" 31 days";
	}
	else if(m==2)
	{
		cout<<"February "<<y<<" has"<<" 28 days";
	}
	else if(m==2 or y%4==0)
	{
		cout<<"February "<<y<<" has"<<" 29 days";
	}
	else if(m==3)
	{
		cout<<"March "<<y<<" has"<<" 31 days";
	}
	else if(m==4)
	{
		cout<<"April "<<y<<" has"<<" 30 days";
	}
	else if(m==5)
	{
		cout<<"May "<<y<<" has"<<" 31 days";
	}
	else if(m==6)
	{
		cout<<"June "<<y<<" has"<<" 30 days";
	}
	else if(m==7)
	{
		cout<<"July "<<y<<" has"<<" 31 days";
	}
	else if(m==8)
	{
		cout<<"August "<<y<<" has"<<" 31 days";
	}
	else if(m==9)
	{
		cout<<"September "<<y<<" has"<<" 30 days";
	}
	else if(m==10)
	{
		cout<<"October "<<y<<" has"<<" 31 days";
	}
	else if(m==11)
	{
		cout<<"November "<<y<<" has"<<" 30 days";
	}
	else if(m==12)
	{
		cout<<"December "<<y<<" has"<<" 31 days";
	}
}
