#include<iostream>
#include<string.h>
using namespace std;

class student
{private:
	int sid;
	char sname[20];
	int engm,hinm;
	
public:
	student()
	{
		sid=6;
		engm=50;
		hinm=45;
		strcpy(sname,"Sam");
	}
	student(int x,char *name,int e,int h)
	{
		sid=x;
		engm=e;
		hinm=h;
		strcpy(sname,name);
	}
	
	void printdata()
	{
		cout<<endl<<"Sid = "<<sid<<" "<<"Sname = "<<sname<<" "
		<<"English marks = "<<engm<<" "<<"Hindi marks = "<<hinm;
	}
};

main()
{
	student s1,s2,s3(5,"ram",60,70),s4;
		
	s1.printdata();
	s2.printdata();
	s3.printdata();
	s4.printdata();
}
