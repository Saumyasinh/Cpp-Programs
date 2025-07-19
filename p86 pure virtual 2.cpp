#include<iostream>
using namespace std;

class polygon
{
	public:
	void virtual area(float h, float b)=0;
};

class tri : public polygon
{
	public:
	void area(float h, float b)
	{
		cout<<endl<<"area of Triangle = "<<h*b*0.5;
	}
};

class rect : public polygon 
{
	public:
	void area(float h, float b)
	{
		cout<<endl<<"area of Rectangle = "<<h*b;	
	}
};
int main()
{
	polygon *p;
	tri t1; 
    rect r1;
	
	p = &t1;
	p->area(10,5);
	
	p = &r1;
	p->area(4,6);
}
