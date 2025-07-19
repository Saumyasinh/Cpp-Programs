#include<iostream>
using namespace std;

int main()
{
	int h,e,s,total;
	
	cout<<"Enter marks of Hindi =>";
	cin>>h;
	cout<<"Enter marks of English =>";
	cin>>e;
	cout<<"Enter marks of SS =>";
	cin>>s;
	
	total=h+e+s;
	
	if(total>50)
	{
		cout<<endl<<"Your total is ";cout<<total;cout<<". You are Pass.";
	}
	else
	{
		cout<<endl<<"Fail";
	}
}
