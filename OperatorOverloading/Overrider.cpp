#include "Overrider.h"
#include <iostream>

using namespace std;

Overrider::Overrider()
{}

Overrider::Overrider(int a){
    num = a;
}

Overrider Overrider::operator+(Overrider aoo){

    Overrider brandNew;
    brandNew.num = num + aoo.num;
    return(brandNew);
}

