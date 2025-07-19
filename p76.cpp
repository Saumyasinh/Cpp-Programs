#inclde<iostream>
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
		currency sum(currency &x)
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
	cout<<"\n--------------";
	
	t1.display();
	t2.display();
	cout<<"\n----------------";
	
	t3=t1.sum(t2);
	t3.display();
}
