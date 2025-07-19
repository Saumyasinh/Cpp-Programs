#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
    char name[100];
    
    cout << "Enter your name:";
    cin >> name;
    
    if(strlen(name)<=2)
    {
    	cout<<endl<<"Very short name";
	}
	else
	{
		cout<<endl<<"Hello "<<name;
	}
}
