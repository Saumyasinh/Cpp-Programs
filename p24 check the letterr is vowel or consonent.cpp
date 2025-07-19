#include<iostream>
using namespace std;
int main()
{
	char l;
		
	cout<<"Enter letter =>";
	cin>>l;
	
	if(l=='a' or l=='e' or l=='i' or l=='o' or l=='u' or 
	l=='A' or l=='E' or l=='I' or l=='O' or l=='U')
	{
		cout<<endl<<l<<" is vowel.";
	}
	else
	{
		cout<<endl<<l<<" is consonent.";
	}
}
