#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream if1("d:\\abc.txt");
    ifstream if2("d:\\def.txt");
    ofstream of1("d:\\pqr.txt");
    char ch;
    while (if1.get(ch)) 
	{
		cout<<ch;  
        of1<<ch;  
    }
    while (if2.get(ch)) 
	{
		cout<<ch;
		of1<<ch;
    }
    if1.close();
    if2.close();
    of1.close();
    cout << endl << "Copied" << endl;
}

