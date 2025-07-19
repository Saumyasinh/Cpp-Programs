#include <iostream>
using namespace std;

int main() 
{
    int service;
    
    cout << "Enter Year of Service :";
    cin >> service;
    
    if(service>5)
    {
    	cout<<endl<<"Very good you will get 5% bonus.";
	}
	else
	{
		cout<<endl<<"Sorry you will not get bonus.";
	}
}
