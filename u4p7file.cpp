#include<iostream>
#include<class T>
using namespace std;
class test
{
	T a,b;
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
};
main()
{
	test<int>t1;
	t1.getdata();
	t1.display();
	
	test<int>t2;
	t2.getdata();
	t2.display();
	
	test<int>t3;
	t3.getdata();
	t3.display();
	
	test<int>t4;
	t4.getdata();
	t4.display();
}
