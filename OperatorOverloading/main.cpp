#include "Overrider.h"
#include <iostream>

using namespace std;

int main()
{
    Overrider a(13);
    Overrider b(28);
    Overrider c;

    a=a+b;
    cout << a.num << endl;
    b=b+b;
    cout << b.num<< endl;
    c=a+b;
    cout << c.num<< endl;
    a=c+b;
    cout << a.num<< endl;

}
