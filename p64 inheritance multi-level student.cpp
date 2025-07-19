#include<iostream>
#include<string.h>
using namespace std;

/*

function overriding

when we declare same function name in base and derived class means in parent and child
that time , derived class function is overriding base class function

that concept is known as function overriding

*/


class student
{
private:
	int rno;
	char sname[20];
public:
	void setdata()
	{
		cout<<endl<<"Enter Roll no => ";
		cin>>rno;
		cout<<endl<<"Enter Student name => ";
		cin>>sname;
	}
	void printdata()
	{
		cout<<endl<<"Roll no = "<<rno<<" "<<endl<<"Student name = "<<sname;
	}
};

class marks : public student
{
protected:
	int em,hm;
public:
	void setdata()
	{
		student::setdata();
		cout<<endl<<"Enter marks of English => ";
		cin>>em;
		cout<<endl<<"Enter marks of Hindi => ";
		cin>>hm;
	}
	void printdata()
	{
		student::printdata();
		cout<<endl<<"English Marks = "<<em<<" "<<endl<<"Hindi Marks = "<<hm;
	}
};

class result : public marks
{
public:
	void printdata()
	{
		marks::printdata();
		cout<<endl<<"Result = "<<em+hm;
	}
};

main()
{
	result r1;
	
		r1.setdata();
		r1.printdata();
}
