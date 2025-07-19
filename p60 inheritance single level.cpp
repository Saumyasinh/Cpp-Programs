#include<iostream>
using namespace std;

class India
{
protected:
	int a;
public:
	void setindia()
	{
		cout<<endl<<"Enter value of a =>";
		cin>>a;
	}
	void printindia()
	{
		cout<<endl<<"Value of a = "<<a;
	}
};

//private no where , public any where , protected somewhere

class USA : public India 
{
private:
	int b;
public:
	void setusa()
	{
		cout<<endl<<"Enter value of b =>";
		cin>>b;
	}
	void printusa()
	{
		cout<<endl<<"Value of b = "<<b;
	}
	void multi()
	{
		cout<<endl<<"Value of Multiplication = "<<a*b;
	}
};

main()
{
	USA u1;
	
	
	u1.setindia();
	u1.setusa();
	u1.printindia();
	u1.printusa();
	u1.multi();
}
	
