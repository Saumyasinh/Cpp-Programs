#include<iostream>
using namespace std;
class test
{
	int feet,inch;
	public:
		void getdata()
		{
			cout<<"Enter Feet and Inch =";
			cin>>feet>>inch;
		}
		void display()
		{
			cout<<"\n"<<feet<<"\t"<<inch;
		}
		
		//t3=t1.sum(t2);
		test sum(test t2)
		{
			test t3;
			t3.inch = (inch +t2.inch)%12; 
			t3.feet = (feet  + t2.feet) +(inch +t2.inch)/12; 
			return t3;
		}

/*
		test operator+(test t2)
		{
			test t3;
			t3.inch = (inch +t2.inch)%12; 
			t3.feet = (feet  + t2.feet) +(inch +t2.inch)/12; 
			return t3;
		}		*/
};
main()
{
	test t1,t2,t3;
	t1.getdata();
	t2.getdata();
	
	cout<<"\nFEET\tINCH";
	cout<<"\n--------------";
	
	t1.display();
	t2.display();
	cout<<"\n---------------";
	
	t3=t1.sum(t2);
	t3.display();
}
