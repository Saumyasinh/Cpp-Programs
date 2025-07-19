#include<iostream>
#include<class T>
using namespace std;
class test
{
	T a[5];
	int i;
	public:
		void getdata()
		{
			for(i=0,i<5,i++)
			{
				cout<<"Enter Value = ";
				cin>>a[i];
			}
		}
		void display()
		{
			for(i=0,i<5,i++)
			{
				cout<<"\t"<<a[i];
			}
			cout<<"\n";
		}
};
main()
{
	test<int>t1;
	t1.getdata();
	t1.display();
	
	test<float>t2;
	t2.getdata();
	t2.display();
	
	test<char>t3;
	t3.getdata();
	t3.display();
}
