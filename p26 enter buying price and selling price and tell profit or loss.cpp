#include<iostream>
using namespace std;
int main()
{
	int bp,sp;
		
	cout<<"Enter Buying Price =>";
	cin>>bp;
	cout<<"Enter Selling Price =>";
	cin>>sp;
	
	cout<<endl<<"Buy = "<<bp;
	cout<<endl<<"Sell = "<<sp;
	 
	
	if(bp<sp)
	{
		cout<<endl<<"The User has made a profit.";
	}
	else
	{
		cout<<endl<<"The User has made a loss.";
	}
}
