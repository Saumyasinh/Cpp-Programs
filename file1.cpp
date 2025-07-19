#include<fstream>
#include<iostream>
using namespace std;

main()
{
	ifstream if1("d:\\abc.txt");
	char ch;
	while(!if1.eof())
	{
		if1.get(ch);
		cout<<ch;
	}
	if1.close();
}
