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

class USA : public India 
{
private:
	int a;
public:
	void setusa()
	{
		cout<<endl<<"Enter value of a =>";
		cin>>a;
	}
	void printusa()
	{
		cout<<endl<<"Value of a = "<<a;
	}
	void multi()
	{
		cout<<endl<<"Value of Multiplication = "<<a*India::a;
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
	
