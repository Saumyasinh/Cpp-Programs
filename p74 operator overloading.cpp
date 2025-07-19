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
		//m3=m1+m2
		
		//m3=m1.operator+(m2)
		
		math operator+(math m2)
		{
			math m3;
			m3.a=a+m2.a;
			m3.b=b+m2.b;
			m3.c=c+m2.c;
			
			return m3;
		}
};
main()
{
	math m1,m2,m3;
	
	m1.getdata();
	m2.getdata();
	m1.printdata();
	m2.printdata();
	
	m3=m1+m2;
	m3.printdata();
}

