#include <iostream>
#include "People.h"
#include "Birthday.h"

using namespace std;

class FriendlyClass{
    public:
        FriendlyClass(){friendlyInt = 0;}
    private:
        int friendlyInt;

    friend void friendlyFriend(FriendlyClass fc);
};



int main()
{
    FriendlyClass fObj;
    friendlyFriend(fObj);

    //Birthday bObj(03,10,2000);
    //People personOne("Daniel Munoz", bObj);

    //personOne.printInfo();
}

void friendlyFriend(FriendlyClass fc){
    fc.friendlyInt = 99;
    cout << fc.friendlyInt << endl;
}
