#include<iostream>
using namespace std;

/*An inline function is a function that is expanded in line when it is called.
Advantages:
Inline functions can make the program run faster by skipping the usual
function call process.
Disadvantages:
Since the function’s code is repeated wherever it’s called, it can make
the program size bigger.
Large or complex inline functions may slow down the compiler and are harder
for debugging.*/

inline int add(int a,int b)
{
	return a+b;
}
main()
{
	cout<<add(20,30);
}
