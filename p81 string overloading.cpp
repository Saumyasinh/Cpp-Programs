#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char sname[200];
	public:
		void getdata()
		{
			cout<<"Enter sname =>";
			cin>>sname;
		}
		void display()
		{
			cout<<"\n = "<<sname;
		}
		
		//s3=s1+s2;
		String operator+(String s2)
		{
			String tmp;
			
			strcpy(tmp.sname,sname);
			strcat(tmp.sname,s2.sname);
			
			return tmp;	
		}	
		
	};

main()
{
	String s1,s2,s3;
	
	s1.getdata();
	s2.getdata();
	
	s3 = s1+s2;
	
	s1.display();
	s2.display();
	s3.display();
	
}
