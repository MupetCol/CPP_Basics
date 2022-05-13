#include <iostream>

using namespace std;

class Enemy{
    protected:
        int attackStat = 0;
        //NEXT LINE MAKES THIS AN ABSTRACT CLASS
        //An abstract class is one that makes use of a pure virtual function
        //pure virtual: force subclasses to make use of this function, else it launches and exceptionS
        virtual void attack()= 0;
        void setAttack(int a){attackStat = a;}
    public:
        void pubSetAttack(int a){attackStat = a;}
};

class Minion: public Enemy{
    public:
        //Using a protected function, i doubt this is the proper way i think is better just
        //declaring them as public
        void useSetAttack(int x){setAttack(x);}
        void attack(){cout << "I am a minion, die!! -" << attackStat << endl;}
};

class Orc: public Orc{
    public:
        void iDontAttack();
};

int main()
{
    Minion m;

    m.useSetAttack(122);
    m.pubSetAttack(19);
    m.attack();

}
