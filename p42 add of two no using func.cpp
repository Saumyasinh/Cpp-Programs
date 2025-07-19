#include<iostream>
using namespace std;
/*
function overloading
When we declare more than one function with the same name
but argument is different.
*/
void add(int a,int b)
{
	cout<<endl<<"Add = "<<a+b;
}
void add(int a,int b,int c)
{
	cout<<endl<<"Add = "<<a+b+c;
}
main()
{
	add(22,33);
	add(1,2,3);
}
