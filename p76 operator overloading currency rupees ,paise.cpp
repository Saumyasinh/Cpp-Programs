#include<iostream>
using namespace std;
class currency
{
	int r,p;
	public:
		void getdata()
		{
			cout<<"Enter Rupees and paise =";
			cin>>r>>p;
		}
		void display()
		{
			cout<<"\n"<<r<<"\t"<<p;
		}
		currency sum(currency x)
		{
			currency z;
			
			z.p=(p+x.p)%100;
			z.r=r+x.r+(p+x.p)/100;
			
			return z;
		}
};

main()
{
	currency c1,c2,c3;
	
	c1.getdata();
	c2.getdata();
	
	cout<<"\nRUPEES\tPAISE";
	cout<<"\n----------------";
	
	c1.display();
	c2.display();
	cout<<"\n----------------";
	
	c3=c1.sum(c2);
	c3.display();
}

// FLOAT float a,b setdata pritndata F3=F1+F2
