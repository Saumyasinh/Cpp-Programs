#include<iostream>
using namespace std;

int main()
{
	int n,i,sum=0;
	
	for(i=1;i<=5;i++)
	{
		cout<<"Enter number =>";
		cin>>n;
		sum=sum+n;
	}
	cout<<endl<<"Sum = "<<sum;
}
