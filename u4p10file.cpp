#include<iostream>
using namespace std;
main()
{
	int a,b;
	
	cout<<"Enter Two number = ";
	cin>>a>>b;
	
	try
	{
		if(b==0)
		{
			throw"Division by zero is Error!";
			cout<<"Result"<<a/b<<endl;
		}
	}
	catch(char*msg)
	{
		cout<<"Exception ="<<msg<<endl;
	}
}
