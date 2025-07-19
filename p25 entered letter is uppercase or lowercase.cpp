#include<iostream>
using namespace std;
int main()
{
	char l;
		
	cout<<"Enter letter =>";
	cin>>l;
	
	if(l>='A' && l<='Z')
	{
		cout<<endl<<l<<" IS UPPERCASE.";
	}
	else
	{
		cout<<endl<<l<<" is lowercase.";
	}
}
