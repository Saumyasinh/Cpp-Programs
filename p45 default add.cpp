#include<iostream>
using namespace std;

/*default argument is a value you set for a function parameter 
that will be used if no argument is provided for that parameter
when the function is called.*/

void add(int a,int b,int c=0,int d=0)
{
	cout<<endl<<"Add = "<<a+b+c+d;
}
main()
{
	add(20,30);
	add(1,2,3);
	add(4,3,2,1);
}
