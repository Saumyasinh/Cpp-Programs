#include<iostream>
using namespace std;

int main()
{
	float a,b;
	char c;
		
	cout<<"Enter no1 =>";
	cin>>a;
	cout<<"Enter no2 =>";
	cin>>b;
	cout<<endl<<"Enter + for Add, - for Sub, * for Mul, / for Div";
	cout<<endl<<"Enter =>";
	cin>>c;
	if(c=='+')
	{
		cout<<endl<<"Add = "<<a+b;
	}
	else if(c=='-')
	{
		cout<<endl<<"Sub = "<<a-b;
	}
	else if(c=='*')
	{
		cout<<endl<<"Mul = "<<a*b;
	}
	else if(c=='/')
	{
		cout<<endl<<"Div = "<<a/b;
	}
	else
	{
		cout<<endl<<"Invalid Value";
	}
}
