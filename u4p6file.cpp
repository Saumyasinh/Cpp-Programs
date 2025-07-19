#include<iostream>
using namespace std;
template <class T>
void mySwap(T &a, T &b) // Pass by reference
{
    T c;
    cout << "\nBefore Swapping\n";
    cout << "\n" << a << "\t" << b;
    
    c = a;
    a = b;
    b = c;
    
    cout << "\nAfter Swapping\n";
    cout << "\n" << a << "\t" << b << endl;
}

int main()
{
    char x = 'S', y = 'M';
    int p = 10, q = 20;
    double m = 3.6, n = 2.9;

    mySwap(x, y);
    mySwap(p, q);
    mySwap(m, n);

    return 0;
}

