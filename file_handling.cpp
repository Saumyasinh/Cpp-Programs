#include<iostream>
#include<fstream>
main()
{
	char c;
	int l=0,s=0,v=0,d=0;
	
	ifstream if1("test.txt",ios::in);
	
	while(!f.eof())
	{
		c=f.get();
		cout<<c;
		l++;
		
		if(c=='a' || c=='e' || c=='i' || c=='o' c=='u' || 
			c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		{
			v++;		
		}
		if(c==' ')
		{
			s++;
		}
		if(c>='0' && c<='9')
		{
			d++;
		}
		cout<<"\n\nNumber of Characters ="<<l;
		cout<<"\nVowels ="<<v;
		cout<<"\nSpace ="<<s;
		cout<<"\nDigits ="<<d;
		if1.close();
	}
}

