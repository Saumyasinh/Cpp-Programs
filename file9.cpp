#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream of1("d:\\state.txt");
	ofstream of2("d:\\capital.txt");
	
	of1<<"\nSTATE FILE";
	of1<<"\nGujarat\nPunjab\nGoa";
	of1.close();
	
	of2<<"\nCAPITAL FILE";
	of2<<"\nGandhinagar\nChandigrah\nPanji";
	of2.close();
}
