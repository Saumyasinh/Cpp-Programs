#include<iostream>
using namespace std;
template <class T1,class T2>
void add(T1 a,T2 b)
{
	cout<<"\nA = "<<a<<"\tB = "<<b;
}
main()
{
	add('a',22);
	add(2.5,'b');
}
