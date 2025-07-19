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
		strcpy(sname,"Saumyasinh Mori");
		cout<<endl<<"in student cons";
	}
	
	~student()
	{
		cout<<endl<<"Bye from student";
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
		cout<<endl<<"marks const";
	}
	
	~marks()
	{
		cout<<endl<<"Bye from marks";
	}
	void printmarks()
	{
		cout<<endl<<"English marks = "<<em<<" "<<endl<<"Hindi marks = "<<hm;
	}
};

class result :  public marks
{
public:
	result()
	{
		cout<<endl<<"in result cons";
	}
	~result()
	{
		cout<<endl<<"bye from result";
	}
	

	void printresult()
	{
		cout<<endl<<"Result = "<<em+hm;
	}
};

main()
{
	result r1;
	r1.printstudent();
	r1.printmarks();
	r1.printresult();
}W
