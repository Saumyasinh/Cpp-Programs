#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
	int sno;
	char sname[20];
	
public:
	
		void setdata();
		void printdata();
};
	
	void student :: setdata()
	{
		cout<<endl<<"Enter Sno =>";
		cin>>sno;
		cout<<endl<<"Enter Sname =>";
		cin>>sname;
	}
	
	void student :: printdata()
	{
		cout<<endl<<"Sno = "<<sno<<" "<<"Sname = "<<sname;
	}	


main()
{
	student s1,s2;
	
	s1.setdata();
	s2.setdata();
	
	s1.printdata();
	s2.printdata();
}
