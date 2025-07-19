#include<iostream>
using namespace std;

class polygon
{
protected:
	float h,b;

public:
	void setpolygon()
	{
		cout<<endl<<"Enter value of Height  => ";
		cin>>h;
		cout<<endl<<"Enter value of Base => ";
		cin>>b;
	}
	void printpolygon()
	{
		cout<<endl<<"Height = "<<h<<" "<<endl<<"Base = "<<b;
	}
};

class triangle : public polygon
{
public:
	void printtriangle()
	{
		cout<<endl<<"\nArea of Triangle = "<<h*b*0.5;
	}	
};

class rectangle : public polygon
{	
public:
	void printrectangle()
	{
		cout<<endl<<"Area of Rectangle = "<<h*b;
	}
};

main()
{
	triangle t1;
	rectangle r1;
	
	t1.setpolygon();
	t1.printpolygon();
	t1.printtriangle();
	
	r1.setpolygon();
	r1.printpolygon();
	r1.printrectangle();
}

