#include<iostream>
using namespace std;
int main()
{
	int n1,n2,product;
		
	cout<<"Enter number 1 =>";
	cin>>n1;
	cout<<"Enter number 2 =>";
	cin>>n2;
	product=n1*n2;

	if(product<=50)
	{
		cout<<endl<<"The Product is "<<n1*n2;
	}
	else
	{
		cout<<endl<<"The ADD is "<<n1+n2;
	}
}
