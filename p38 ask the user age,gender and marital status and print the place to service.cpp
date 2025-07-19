#include <iostream>
using namespace std;

int main() 
{
    int age;
	char gender,ms;
    
    cout << "Enter Age : ";
    cin >> age;
    cout<<"Enter Gender :";
    cin>>gender;
    cout<<"Enter Marital Status (Y or N) :";
    cin>>ms;
    
    if(gender=='F' and age<60)
    {
    	cout<<"She will work only in Urban Areas.";
	}
	else if(gender=='M')
	{
		if(age>=20 and age<=40)
		{
			cout<<"He may work anywhere.";
		}
		else if(age>=40 and age<=60) 
		{
			cout<<"He will work in Urban Areas only.";
		}
		else
		{
			cout<<"ERROR";
		}
	}
	else
	{
		cout<<"ERROR";
	}
}
