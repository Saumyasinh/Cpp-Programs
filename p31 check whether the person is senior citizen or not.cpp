#include <iostream>
using namespace std;

int main() 
{
    int age;
    
    cout << "Enter Age of a person: ";
    cin >> age;
    
    if(age>=60)
    {
    	cout<<endl<<"Yes,the person is Senior Citizen";
	}
	else
	{
		cout<<endl<<"No,the person is not Senior Citizen";
	}
}
