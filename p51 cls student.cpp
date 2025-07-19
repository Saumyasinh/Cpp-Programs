#include<iostream>
using namespace std;

class student
{private:
	int sid;
	char sname[20];
	int engm,hinm;
	
public:
	void setdata()
	{
		cout<<endl<<"Enter SID =>";
		cin>>sid;
		cout<<endl<<"Enter Sname =>";
		cin>>sname;
		cout<<endl<<"Enter English marks =>";
		cin>>engm;
		cout<<endl<<"Enter Hindi marks =>";
		cin>>hinm;
	}
	void printdata()
	{
		cout<<endl<<"Sid = "<<sid<<" "<<"Sname = "<<sname<<" "
		<<"English marks = "<<engm<<" "<<"Hindi marks = "<<hinm;
	}
};

main()
{
	student s1,s2;
	
	s1.setdata();
	s2.setdata();
	
	s1.printdata();
	s2.printdata();
}
