#include <iostream>
using namespace std;

int main() 
{
    int sugar;
    
    cout<<"Enter your fasting sugar level :";
    cin>>sugar;
	
	if(sugar>80 and sugar<100)
    {
    	cout<<endl<<"Sugar is low";
	}
	else if(sugar>100)
	{
		cout<<endl<<"Sugar is Normal";
	}	
}

