#include <iostream>

using namespace std;

int main()
{
    int i = 4;

    cout << "i = " << i << endl;

    cout << "&i = " << &i << endl;

    int *p;

    cout << "p = " << p << endl;

    cout << "*p = " << *p << endl;

    cout << "&p = " << &p << endl;

    cout << "&i = " << &i << endl;

    return 0;
}

