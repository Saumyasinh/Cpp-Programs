#include<iostream>
using namespace std;

class usa;

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
		friend void max(india i1,usa u1);
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
		friend void max(india i1,usa u1);
};

	void max(india i1,usa u1)
		{
			if(i1.a>u1.b)
			{
				cout<<endl<<"a is greater";
			}
			else
			{
				cout<<endl<<"b is greater";
			}
		}

main()
{
	india i1;
	usa u1;
	
	i1.getdata();
	u1.getdata();
	i1.printdata();
	u1.printdata();
	
	max(i1,u1);
}
