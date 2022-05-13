#include <iostream>

using namespace std;

//Template specialization: Template works a different implementation when an specific data type is passed

template <class T>
class Spanki{
    public:
        Spanki(T x){
            cout << x << " is not a character :c" << endl;
        }
};

template<> //specialization when leaving the data type empty
class Spanki<char> /*Here we define the data type*/{
    public:
        Spanki(char x){
            cout << x << " is indeed a character  c:" << endl;
        }
};

int main()
{
    Spanki<int> obj1(15);
    Spanki<double> obj2(41.12);
    Spanki<char> obj3('a');
}
