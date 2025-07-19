#include<iostream>
using namespace std;
main()
{
	try
	{
		int num;
		cout<<"Enter Number = ";
		cin>>num;
		
		if(num==0)
		{
			throw 0;
		}
		else if(num<0)
		{
			throw"Negative number!";
		}
		else
		{
			cout<<"Valid Number!"<<num<<endl;
		}
	}
		catch(int e)
		{
			cout<<"Exception : Division by zero is not allowed";
		}
		catch(char *msg)
		{
			cout<<"Exception : "<<msg<<endl;
		}
	}
