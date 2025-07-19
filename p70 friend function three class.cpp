#include<iostream>
using namespace std;

class usa;
class canada;

class india
{
	private:
		int a;
	public:
		void getdata()
		{
			cout<<"Enter value of a =";
			cin>>a;
		}
		void printdata()
		{
			cout<<"\nValue of a => "<<a;		
		}	
		friend void sum(india i1,usa u1,canada c1);
};
class usa 
{
	private:
		int b;
	public:
		void getdata()
		{
			cout<<"Enter value of b =";
			cin>>b;
		}
		void printdata()
		{
			cout<<"\nValue of b => "<<b;		
		}	
		friend void sum(india i1,usa u1,canada c1);
};
class canada 
{
	private:
		int c;
	public:
		void getdata()
		{
			cout<<"Enter value of c =";
			cin>>c;
		}
		void printdata()
		{
			cout<<"\nValue of c => "<<c;		
		}	
		friend void sum(india i1,usa u1,canada c1);
};



	void sum(india i1,usa u1,canada c1)
		{
			int sum=0,average;
			
			sum = i1.a+u1.b+c1.c;
			average = sum/3;
			
			cout<<"\nSum = "<<sum;
			cout<<"\nAverage = "<<average;
		}

main()
{
	india i1;
	usa u1;
	canada c1;
	
	i1.getdata();
	u1.getdata();
	c1.getdata();
	i1.printdata();
	u1.printdata();
	c1.printdata();
	
	sum(i1,u1,c1);
}
