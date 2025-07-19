#include <fstream>
#include <iostream>
using namespace std;

int main() {
    int s=0,v=0,d=0,t=0,a=0,lc=0,uc=0,n=0;
    
    ifstream if1("d:\\abc.txt");
    char ch;

    while (if1.get(ch)) 
	{
        if (ch == ' ') 
		{
            s++;
        }
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
		{
            v++;
        }
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
        	lc++;
		}
		if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {
        	uc++;
		}
        if (ch >= '0' && ch <= '9') 
		{
            d++;
        }
        if (ch == '\t') 
		{
            t++;
        } 
        if(ch=='\n')
        {
        	n++;
		}
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
            a++;
        }
    }
    if1.close();
    
    cout <<"Spaces: "<<s<<endl;
    cout<<"New Line: "<<n<<endl;
    cout <<"Vowels: "<<v<<endl;
    cout <<"Digits: "<<d<<endl;
    cout <<"Tab: "<<t<<endl;
    cout<<"Lowercase: "<<lc<<endl;
    cout<<"Uppercase: "<<uc<<endl;
    cout <<"Alphabets: "<<a<<endl;
}

