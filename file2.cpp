#include<fstream>
#include<iostream>
using namespace std;

main()
{
	int c=0;
	ifstream if1("d:\\abc.txt");
	char ch;
	while(!if1.eof())
	{
		if1.get(ch);
		if(ch==' ')
		{
			c++;
		}
	}
	if1.close();
	cout<<endl<<"Count = "<<c;
}
