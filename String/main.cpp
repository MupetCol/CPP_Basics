#include <iostream>
#include <string>;

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int c = 0;
    double a = 0;

    cin >> c;
    cin >> a;

    string x;
    cin.ignore();
    getline(cin, x);

    cout << i + c << endl;
    cout << d + a << endl;
    cout << x << endl;



}
