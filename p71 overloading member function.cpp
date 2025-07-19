#include<iostream>
using namespace std;

class math
{
	private:
		int a,b,c;
	public:
		void getdata()
		{
			cout<<"Enter a =";
			cin>>a;
			cout<<"\nEnter b =";
			cin>>b;
			cout<<"\nEnter c =";
			cin>>c;
		}
		void printdata()
		{
			cout<<"\nA = "<<a<<" B = "<<b<<" C = "<<c;
		}
		void operator-()
		{
			a=-a;
			b=-b;
			c=-c;
		}
};
main()
{
	math m1;
	
	m1.getdata();
	m1.printdata();
	-m1;
	m1.printdata();
}

