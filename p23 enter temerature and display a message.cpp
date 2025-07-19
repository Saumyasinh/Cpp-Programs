#include<iostream>
using namespace std;

int main()
{
	float temp;
		
	cout<<"Enter temperature =>";
	cin>>temp;
	
	if(temp<0)
	{
		cout<<endl<<"Freezing Atmosphere";
	}
	else if(temp>0 && temp<=10)
	{
		cout<<endl<<"Very Cold Atmosphere";
	}
	else if(temp>10 && temp<=20)
	{
		cout<<endl<<"Cold Atmosphere";
	}
	else if(temp>20 && temp<=30)
	{
		cout<<endl<<"Normal Atmosphere";
	}
	else if(temp>30 && temp<=40)
	{
		cout<<endl<<"Hot Atmosphere";
	}
	else
	{
		cout<<endl<<"Very Hot Atmosphere";
	}
}
