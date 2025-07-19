#include <iostream>
using namespace std;

int main() 
{
    int c,a,attendence;
    
    cout<<"Enter Number of classes held :";
    cin>>c;
    cout<<"Enter Number of classes attended in [%] :";
    cin>>a;
	
	attendence = a/float(c)*100;
	
    if(attendence>75)
    {
    	cout<<endl<<"The Student is allowed to sit in the exam.";
	}
	else
	{
		cout<<endl<<"The Student is not allowed to sit in the exam.";
	}
}
