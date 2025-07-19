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
	
	if(total==100)
	{
		cout<<endl<<"Your total is ";cout<<total;cout<<". You got A grade.";
	}
	else if(total>50 && total<100)
	{
		cout<<endl<<"Your total is ";cout<<total;cout<<". You got B grade.";
	}
	else
	{
		cout<<endl<<"Your total is ";cout<<total;cout<<". You got C grade.";
	}
}
