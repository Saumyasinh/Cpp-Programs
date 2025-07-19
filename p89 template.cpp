#include <iostream>
using namespace std;
template <class T>
class Math 
{
	private:
    	T a, b;

	public:
	    Math(T x, T y) 
		{
	        a = x;
	        b = y;
	    }
		void printdata()
		{
			cout<<"\nAddition ="<<a+b;
			cout<<"\nSubtraction ="<<a-b;
			cout<<"\nMultiplication ="<<a*b;
			cout<<"\nDivision ="<<a/b;
		}
};
int main() 
{
	Math<int> z(22,33);
	Math<float> z1(2.3,4.5);
	
	z.printdata();
	z1.printdata();
}
