#include <fstream>
#include <iostream>
using namespace std;

int main() {
    
    ifstream if1("d:\\abc.txt");
	ofstream of1("d:\\pqr.txt");
    char ch;

    while (if1.get(ch)) 
	{
		of1<<ch;
    }
    if1.close();
    of1.close();
    cout<<endl<<"Copied";
}

