#include <iostream>
using namespace std;

int main() 
{
    int age;
	char gender;
    
    cout << "Enter Age : ";
    cin >> age;
    cout<<"Enter Gender :";
    cin>>gender;
    
    if(age>=18 and age<30)
    {
    	if(gender=='M')
    	{
    		cout<<endl<<"700";
		}
		else
		{
			cout<<endl<<"750";
		}
	}
	else if(age>=30 and age<=40)
	{
		if(gender=='M')
    	{
    		cout<<endl<<"800";
		}
		else
		{
			cout<<endl<<"850";
		}
	}
	else
	{
		cout<<"Invalid value";
	}
}
