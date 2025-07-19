#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
	int sno;
	char sname[20];
	static int c;
public:
	void setdata()
	{
		cout<<endl<<"Enter Student Name => ";
		cin>>sname;
		c++;
		sno = c;
	}
	void printdata()
	{
		cout<<endl<<"Student ID = "<<sno<<" Student Name = "<<sname<<"C = "<<c;
	}
};
int student::c;

main()
{
	student s1,s2,s3;
	
	s1.setdata();	
	s2.setdata();
	s3.setdata();
	s1.printdata();
	s2.printdata();
	s3.printdata();
	
}
