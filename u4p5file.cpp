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
			cout<<"Enter Rollno = ";
			cin>>rn;
			cout<<"Enter Name = ";
			gets(name);
			cout<<"Enter Percentage = ";
			cin>>per;
		}
		void display()
		{
			cout<<"\n"<<rn<<"\t"<<name<<"\t"<<per;
		}
};
main()
{
	fstream f1("stud.txt",ios::out);
	student s[3],t;
	int i;
	for(i=0,i<3,i++)
	{
		s[i].getdata();
		f1.write((char *) &s[i], sizeof(s[i]));
	}
	f1.close();
	cout<<"\nRollno\tName\tPercentage";
	fstream f2("stud.txt",ios::in);
	while (f2.read((char *)&t, sizeof(t)))
	{
		t.display();
	}
	f2.close();
	
	int x,f=0;
	cout<<"\nWhich no. you  want to search = ";
	cin>>x;
	
	fstream f3("stud.txt",ios::in);
	while(f3.read((char *)&t, sizeof(t)))
	{
		if(t.rn==x)
		{
			cout<<"\nNo\tName\tPercentage";
			t.display();
			f=1;
		}
	}
	if(f==0)
	{
		cout<<"\nNo not present";
	}
	f3.close();
}
