#include <iostream>
using namespace std;

int main() 
{
    int price;
    
    cout << "Enter Marked Price :";
    cin >> price;
    
    if(price>10000)
    {
    	cout<<endl<<"Your Discount is 20%";
	}
	else if(price<=10000 or price==7000)
	{
		cout<<endl<<"Your Discount is 15%";
	}
	else
	{
		cout<<endl<<"Your Discount is 10%";
	}
}
