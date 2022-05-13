#include <iostream>

using namespace std;

template<class u, class t>

u addTwoDataTypes(u x, t y){
    return (x>y?x+y:x-y);
}

int main()
{
    string a = "Hi";
    int b = 100;
    double c = 98.87;
    float e = 1.11;
    cout << addTwoDataTypes(c, b);
}
