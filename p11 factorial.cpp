#include<iostream>
using namespace std;

int main()
{
	int n,i,f=1;
	
	cout<<"Enter number =>";
	cin>>n;
	if(n>1)
	{
		for(i=1;i<=n;i++)
		{
			cout<<i<<"*";
			f = f*i;
		}
		cout<<endl<<"Factorial of "<<n<<" = "<<f;
	}
	else
	{
		cout<<endl<<"Factorial is not defined";
	}
}
