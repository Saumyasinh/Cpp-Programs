#include<iostream>
#include<fstream>
main()
{
	char c;
	
	fstream f1("test.txt",ios::in);
	fstream f2("xyz.txt",ios::out);
	
	while(!f1.eof())
	{
		c=f1.get();
		f2<<c;
	}
	f1.close();
	f2.close();
}
