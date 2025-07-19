#include <iostream>
using namespace std;

int main() 
{
    int n;
    
    cout << "Enter number :";
    cin >> n;
    
    if(n%2==1)
    {
    	cout<<endl<<"Weird";
	}
	else if(n%2==0 and n<2 and n>5)
	{
		cout<<endl<<"Not weird";
	}
	else if(n%2==0 and n<6 and n>20)
	{
		cout<<endl<<"Weird";
	}
	else if(n%2==0 and n<20)
	{
		cout<<endl<<"Not weird";
	}
	else
	{
		cout<<"ERROR";
	}
}

