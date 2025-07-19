#include<iostream>
using namespace std;

class book
{private:
	int bid;
	char bname[20];
	int bprice;
	
public:
	void setdata()
	{
		cout<<endl<<"Enter BID =>";
		cin>>bid;
		cout<<endl<<"Enter Bname =>";
		cin>>bname;
		cout<<endl<<"Enter Bprice =>";
		cin>>bprice;
	}
	void printdata()
	{
		cout<<endl<<"Bid = "<<bid<<" "<<"Bname = "<<bname<<" "<<"Bprice = "<<bprice;
	}
};

main()
{
	book b1,b2,b3;
	
	b1.setdata();
	b2.setdata();
	b3.setdata();
	
	b1.printdata();
	b2.printdata();
	b3.printdata();
}
