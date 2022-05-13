#include "Parent.h"
#include "Child.h"
#include <iostream>

using namespace std;

Child::Child()
{}

void Child::sayName(){
    cout << "I am a member of the family's next gen" << endl;
}

//DECONSTRUCTORS AND DECONSTRUCRORS ARE NOT INHERITED THEY ARE JUST CALLED BECAUSE OF BEING THE BASE OF THE SUBCLASS
//Constructors from base classes are called before subclasses's ones
//Base classes are destroyed last so their deconstructors run last
