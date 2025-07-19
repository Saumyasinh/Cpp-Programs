#include<iostream>
using namespace std;
#define N 5
template<class T>
class myarr
{
	T a[100];
public:
	myarr() {}

	void setdata()
	{
		for(int i=0;i<N;i++) 
		{
			cout<<endl<<"Enter value =>";
			cin>>a[i];
		}
	}

	void printdata()
	{
		cout<<"\nArray :\n";
		for(int i=0;i<N;i++) 
		{
			cout<<a[i]<<endl;
		}
	}
};

int main()
{
	myarr<int> a1;
	myarr<float> a2;

	a1.setdata();
	a1.printdata();
	
	a2.setdata();
	a2.printdata();
}
