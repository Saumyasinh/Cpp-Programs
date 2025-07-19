#include<iostream>
using namespace std;

void mul(int a,int b)
{
	cout<<endl<<"Mul = "<<a*b;
}
void mul(int a,int b,int c)
{
	cout<<endl<<"Mul = "<<a*b*c;
}
void mul(int a,int b,int c,int d)
{
	cout<<endl<<"Mul = "<<a*b*c*d;
}
main()
{
	mul(20,30);
	mul(1,2,3);
	mul(4,3,2,1);
}
