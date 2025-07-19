#include <iostream>
#include <string.h>
using namespace std;

class student 
{
private:
    int sno;
    char sname[10];

public:
    student() 
	{
        sno = 5;
        strcpy(sname, "Saumya");
        cout << endl << "In student";
    }

    ~student()
	{
        cout << endl << "Bye";
    }

    void printdata() {
        cout << endl << "Student Number = " << sno << " Student Name = " << sname;
    }
};

main() 
{
    student s1;
    {
        student s2;
        {
            student s3;
    		s3.printdata();
	    } 
        s2.printdata();
    }     
	s1.printdata();
}
