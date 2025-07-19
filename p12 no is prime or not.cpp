#include<iostream>
using namespace std;

int main()
{
	int n,y=0,i;
	
	cout<<"Enter number =>";
	cin>>n;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			y=1;
			break;
		}
	}
	if(y==1)
	{
		cout<<endl<<"Not a prime number";
	}
	else
	{
		cout<<endl<<"Prime number";
	}
}
