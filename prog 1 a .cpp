#include <iostream>
using namespace std;

int main() 
{    
    int num1, num2, num3;
    
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    
    int maxNum = num1;
    if (num2 > num1)
	{
        maxNum = num2;
	}   
    if (num3 > num1) 
	{
        maxNum = num3;
    }
    
    int minNum = num1;
    if (num2 < minNum) 
	{
        minNum = num2;
    }
    if (num3 < minNum) 
	{
        minNum = num3;
    }
    
    cout<<"Maximum: "<<maxNum<<endl;
    cout<<"Minimum: "<<minNum<<endl;
    
}

