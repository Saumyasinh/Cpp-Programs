#include<iostream>
#include<string.h>
using namespace std;

class emp
{private:
	int eid;
	char ename[20];
	int salary;
	
public:
	emp()
	{
		eid=6;
		salary=10000;
		strcpy(ename,"raj");
	}
	emp(int x,char *name,int s)
	{
		eid=x;
		salary=s;
		strcpy(ename,name);
	}
	
	void printdata()
	{
		cout<<endl<<"Eid = "<<eid<<" "<<"Ename = "<<ename<<" "<<"Esalary = "<<salary;
	}
};

main()
{
	emp e1,e2,e3(22,"rma",8000),e4;
		
	e1.printdata();
	e2.printdata();
	e3.printdata();
	e4.printdata();
}
