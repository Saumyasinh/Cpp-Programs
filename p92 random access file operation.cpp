#include<iostream>
#include<fstream>
void main()
{
	ifstream file("example.txt", ios::in); 
	if (!file)
	{
		cout << "File not found!" << endl;
		return 1;
	}
	cout << "Current position: " << file.tellg() << endl;
	
	file.seekg(5, ios::beg);
	cout << "New position after seekg: " << file.tellg() << endl;

	char ch;
	file.get(ch);
	cout << "Character at position 5: " << ch << endl;
	file.close();
}
