#include<iostream>
using namespace std;
class FLOAT
{
	float a,b;
	public:
		void getdata()
		{
			cout<<"Enter A and B =";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"\n"<<a<<"\t"<<b;
		}
		//f3=f1.operator+(20)
		FLOAT operator+(int x)
		{
			FLOAT f3;
			f3.a=a+x;
			f3.b=b+x;
			return f3;
		}
};

main()
{
	FLOAT f1,f2,f3;
	
	f1.getdata();
	
	cout<<"\nA";
	f1.display();
	cout<<"\n----------------";
	
	f3=f1+20;
	f3.display();
}
