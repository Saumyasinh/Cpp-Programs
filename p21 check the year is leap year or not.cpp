#include<iostream>
using namespace std;

int main()
{
	int y;
	
	cout<<"Enter year =>";
	cin>>y;
	if(y%4==0)
	{
		cout<<endl<<"Year is a leap year.";
	}
	else
	{
		cout<<endl<<"Year is not a leap year.";
	}
}

