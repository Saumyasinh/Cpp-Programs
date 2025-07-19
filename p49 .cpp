#include<iostream>
using namespace std;

class emp
{private:
	int eid;
	char ename[20];
	int salary;
	
public:
	void setdata()
	{
		cout<<endl<<"Enter EID =>";
		cin>>eid;
		cout<<endl<<"Enter Ename =>";
		cin>>ename;
		cout<<endl<<"Enter Esalary =>";
		cin>>salary;
	}
	void printdata()
	{
		cout<<endl<<"Eid = "<<eid<<"Ename = "<<ename<<"Esalary = "<<salary;
	}
};

main()
{
	emp e1,e2,e3;
	
	e1.setdata();
	e2.setdata();
	e3.setdata();
	
	e1.printdata();
	e2.printdata();
	e3.printdata();
}
