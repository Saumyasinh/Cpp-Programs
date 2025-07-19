#include<iostream>
using namespace std;

/*Reference variable is an alias for another variable, created using the
& symbol. It allows you to work directly with the original variable, 
rather than a copy.*/

int main()
{
	int a=50;
	int &b=a;
	
	cout<<endl<<"a ="<<a;
	cout<<endl<<"b ="<<b;
	
	b=100;
	
	cout<<endl<<"a ="<<a;
	cout<<endl<<"b ="<<b;
	
	a=500;
	
	cout<<endl<<"a ="<<a;
	cout<<endl<<"b ="<<b;
}
