#include <iostream>

using namespace std;

int fact(unsigned long long int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}


int main()
{
    long int x = 1307674368000;
    long int y = 6227020800;
    long int div = x/y;
    cout << endl << div;




}
