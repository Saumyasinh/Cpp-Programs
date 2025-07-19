#include<iostream>
#include<iomanip>
using namespace std;

void swap(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
main()
{
	int x=20,y=5;
	
	cout<<endl<<"x = "<<x<<setw(10)<<" y = "<<y;
	
	swap(x,y);
	
	cout<<endl<<"x = "<<x<<setw(10)<<" y = "<<y;
}
