#include <fstream>
#include <iostream>
using namespace std;

int main() {
    
    ifstream if1("d:\\abc.txt");
    char ch;

    while (if1.get(ch)) 
	{
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
            cout<<"7";
        } 
		else
		{
			cout<<ch;
		}        
    }
    if1.close();
}

