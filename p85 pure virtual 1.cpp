#include<iostream>
using namespace std;
class india
{
	public:
	void virtual hi()=0;
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
	usa u1;
	
	p = &u1;
	p->hi();
}

