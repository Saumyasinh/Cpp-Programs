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
		FLOAT operator+(FLOAT f2)
		{
			FLOAT f3;
			f3.a=a+f2.a;
			f3.b=b+f2.b;
			return f3;
		}
};

main()
{
	FLOAT f1,f2,f3;
	
	f1.getdata();
	f2.getdata();
	
	cout<<"\nA\tB";
	cout<<"\n----------------";
	
	f1.display();
	f2.display();
	cout<<"\n----------------";
	
	f3=f1+f2;
	f3.display();
}
