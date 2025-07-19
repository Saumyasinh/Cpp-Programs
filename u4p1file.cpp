#include<iostream>
#include<fstream>
main()
{
	int n;
	
	cout<<"Enter Last number =";
	cin>>n;
	
	ofstream of1("Even.txt",ios::out);
	ofstream of2("Odd.txt",ios::out);
	
	for(i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			f1<<"\n"<<i;
		}
		else
		{
			f2<<"\n"<<i;
		}
	}
	f1.close();
	f2.close();
}
