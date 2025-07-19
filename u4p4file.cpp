#include<iostream>
#include<fstream>
#include<stdio.h>
class student
{
	public:
		int rn;
		char name[20];
		float per;
		
		void getdata()
		{
			cout<<"Enter Rollno =";
			cin>>rn;
			cout<<"Enter Name =";
			cin>>name;
			cout<<"Enter Percentage =";
			cin>>per;
		}
		void display()
		{
			cout<<"\nRollno\tName\tPercentage";
			cout<<"\n"<<rn<<"\t"<<name<<"\t"<<per;
		}
};
main()
{
	fstream f1("stud.txt",ios::out);
	student s,t;
	s.getdata();
	f1.write((char *)&s, sizeof (s));
	f1.close();
	
	fstream f2("stud.txt",ios::in);
	f2.read((char *)&t, sizeof (t));
	s.display();
	f2.close();
}
