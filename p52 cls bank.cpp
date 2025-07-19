#include<iostream>
using namespace std;

class bank
{private:
	int acno;
	char cname[20];
	int balance;
	
public:
	void openac()
	{
		cout<<endl<<"Enter Account no =>";
		cin>>acno;
		cout<<endl<<"Enter Cname =>";
		cin>>cname;
		cout<<endl<<"Enter Balance =>";
		cin>>balance;
	}
	void printac()
	{
		cout<<endl<<"Account no = "<<acno<<" "<<"Cname = "<<cname<<" "
		<<"Balance = "<<balance;
	}
};

main()
{
	bank b1;
	b1.openac();
	b1.printac();
}
