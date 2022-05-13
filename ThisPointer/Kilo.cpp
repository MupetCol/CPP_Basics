#include <iostream>
#include "Kilo.h"

using namespace std;

Kilo::Kilo(int num)
:h(num)
{
}

void Kilo::printInt(){
    cout << "h=" << h << endl;
    cout << "this->h=" << this->h << endl;
    cout << "(*this).h=" << (*this).h<< endl;
}
