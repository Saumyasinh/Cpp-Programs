#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
    char light[20];
    
    cout << "Enter Signal Light color :";
    cin >> light;
    
    if(strcmp(light,"green")==0)
    {
    	cout<<endl<<"Car is allowed to go.";
	}
	else if(strcmp(light,"yellow")==0)
    {
    	cout<<endl<<"Car has to wait.";
	}
	else if(strcmp(light,"red")==0)
    {
    	cout<<endl<<"Car has to stop.";
	}
	else
	{
		cout<<endl<<"Unrecognized Signal.";
	}
}
