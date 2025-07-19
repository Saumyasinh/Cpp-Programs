#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
	int rno;
	char sname[20];
public:
	student(int x,char *y)
	{
		rno = x;
		strcpy(sname,y);
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

class marks : public student
{
protected:
	int em,hm;
public:
	marks(int x,char *y,int a,int b):student(x,y)
	{
		em = a;
		hm = b;
		cout<<endl<<"Ready for next test ? :)";
	}
	
	~marks()
	{
		cout<<endl<<"Bye from teacher";
	}
	void printmarks()
	{
		cout<<endl<<"English marks = "<<em<<" "<<endl<<"Hindi marks = "<<hm;
	}
};

class result :  public marks
{
public:
	result(int x,char *y,int a,int b):marks(x,y,a,b)
	{
		cout<<endl<<"in result cons";
	}

	void printresult()
	{
		cout<<endl<<"Result = "<<em+hm;
	}
};

main()
{
	result r1(20,"Saumya",37,35);
	
	r1.printstudent();
	r1.printmarks();
	r1.printresult();
}

