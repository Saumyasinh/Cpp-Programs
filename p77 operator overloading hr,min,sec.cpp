#include<iostream>
using namespace std;
class test
{
	int h,m,s;
	public:
		void getdata()
		{
			cout<<"Eter Hour,Minute and Second =";
			cin>>h>>m>>s;
		}
		void display()
		{
			cout<<"\n"<<h<<"\t"<<m<<"\t"<<s;
		}
		friend test sum(test x,test y)
		{
			test z;
			z.s=(x.s+y.s)%60;
			z.m=(x.m+y.m+(x.s+y.s)/60)%60;
			z.h=x.h+y.h+(x.m+y.m+(x.s+y.s)/60)/60;
			return z;		
		}
};
main()
{
	test t1,t2,t3;
	t1.getdata();
	t2.getdata();
	
	cout<<"\nHOUR\tMINUTE\tSECOND";
	cout<<"\n------------------------";
	
	t1.display();
	t2.display();
	cout<<"\n------------------------";
	
	t3=sum(t1,t2);
	t3.display();
}
