#include<iostream>
using namespace std;

//default argument
void mul(int a,int b,int c=1,int d=1)
{
	cout<<endl<<"Mul = "<<a*b*c*d;
}
main()
{
	mul(20,30);
	mul(1,2,3);
	mul(4,3,2,1);
}
