#include<iostream>
using namespace std;
template <class T>
void add(T a,T b)
{
	cout<<"\nSum of two numbers = "<< a+b;
}
main()
{
	add(5,2);
	add(5.2,2.3);
}
