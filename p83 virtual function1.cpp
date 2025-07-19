#include<iostream>
using namespace std;
class india
{
	public:
	void virtual hi()
	{
		cout<<endl<<"In India HI";
	}
};
class usa : public india
{
	public:
	void hi()
	{
		cout<<endl<<"In Usa HI";
	}
};
int main()
{
	india *p;
	india i1;
	usa u1;
	
	p = &i1;
	p->hi();
	
	p = &u1;
	p->hi();
}
