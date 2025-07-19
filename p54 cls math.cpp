#include<iostream>
using namespace std;

class math
{private:
	int a,b;
	
public:
	void setdata()
	{
		cout<<endl<<"Enter value of a =>";
		cin>>a;
		cout<<endl<<"Enter value of b =>";
		cin>>b;
	}
	void printdata()
	{
		cout<<endl<<"a = "<<a<<" "<<"b = "<<b;
	}
	void add()
	{
		cout<<endl<<"Addition = "<<a+b;
	}
	void sub()
	{
		cout<<endl<<"Subtraction = "<<a-b;
	}
	void mul()
	{
		cout<<endl<<"Multiplication = "<<a*b;
	}
	void div()
	{
		cout<<endl<<"Division = "<<a/b;
	}
};

main()
{
	math m1;
	
	m1.setdata();
	m1.printdata();
	m1.add();
	m1.sub();
	m1.mul();
	m1.div();
}
