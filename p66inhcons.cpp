#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
	int rno;
	char sname[20];
public:
	student()
	{
		rno = 20;
		strcpy(sname,"Saumyasinh Mori")
		cout<<endl<<"Present";
	}
	
	~student()
	{
		cout<<endl<<"Bye from class";
	}
	void printstudent()
	{
		cout<<endl<<"Roll no = "<<rno<<" "<<endl<<"Student name = "<<sname;
	}
};

class marks :public student
{
protected:
	int em,hm;
public:
	marks()
	{
		em = 30;
		hm = 20;
		cout<<endl<<"Ready for next test";
	}
	
	~marks()
	{
		cout<<endl<<"Bye from mam";
	}
	void printmarks()
	{
		cout<<endl<<"English marks = "<<em<<" "<<endl<<"Hindi marks = "<<hm;
	}
};

class result :  public marks
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
}

