#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
	int rno;
	char sname[20];
public:
	void setstudent()
	{
		cout<<endl<<"Enter Roll no => ";
		cin>>rno;
		cout<<endl<<"Enter Student name => ";
		cin>>sname;
	}
	void printstudent()
	{
		cout<<endl<<"Roll no = "<<rno<<" "<<endl<<"Student name = "<<sname;
	}
};

class marks
{
protected:
	int em,hm;
public:
	void setmarks()
	{
		cout<<endl<<"Enter English marks => ";
		cin>>em;
		cout<<endl<<"Enter Hindi marks => ";
		cin>>hm;
	}
	void printmarks()
	{
		cout<<endl<<"English marks = "<<em<<" "<<endl<<"Hindi marks = "<<hm;
	}
};

class result : public student, public marks
{
public:
	void printresult()
	{
		cout<<endl<<"Result = "<<em+hm;
	}
};

main()
{
	result r1;
	
	r1.setstudent();
	r1.setmarks();
	r1.printstudent();
	r1.printmarks();
	r1.printresult();
}


