#include<iostream>
using namespace std;

int main()
{
	int n,i,sum=0,c=0;
	
	i=0;
	do
	{
		cout<<"Enter number =>";
		cin>>n;
		if(n%2==0)
		{
			sum=sum+n;n
			c=c+n;
			i++;
		}
		
	}while(n!=-1);
	
	cout<<endl<<"Sum = "<<sum<<" Total entry = "<<i-1<<" Count = "<<c;
}
