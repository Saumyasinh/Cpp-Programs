#include<iostream>
using namespace std;

int main()
{
	int age;
	
	cout<<"Enter your age =>";
	cin>>age;
	if(age>18)
	{
		cout<<endl<<"Yes,you are eligible to vote.";
	}
	else
	{
		cout<<endl<<"Sorry,you are not eligible to vote.";
	}
}
