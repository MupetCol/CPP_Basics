#include <iostream>

using namespace std;

template <class T>
class Bucky{
    T first, second;
    public:
        Bucky(T a, T b): first(a),second(b){}
        T bigger();
};

template <class T> //Needs to be declared before every function that will use it
T Bucky<T>::bigger(){
    return (first > second?first:second);
}

int main()
{
    Bucky <int> bo  /*We need to declare whenever we use a class template as a parameter what kind of data we will use */
    (69, 11);
    cout << bo.bigger();
}

//Weird concept, useful for shorter codes but not really intuitive how it is applied, ill try it later
