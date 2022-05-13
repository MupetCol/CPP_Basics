#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "AddedClass.h"

using namespace std;

// increment operators ++x adds before executing the line of code x++ adds after executing the line of code 
// Functions below are prototyped and created below main top to bottom 
// from earliest lesson to more advanced one

// *UNARY* SCOPE RESOLUTION OPERATOR ::

void calculator();

void printSomething();

void printCrap(int x);

int addNumbers(int x, int y);

int loopSum();

int bacon = 0;

void elegantNumIdentifier();

void twoByTwoDigits();

void  primerNumberDecomposition();

void trianglePiramids();

void date();

void twoAndPrimes();

void swapA(int& x, int& y);

void trueRandomGenerator();

//Default values in a function
int volume(int l = 1, int w = 1, int h = 1);

int sameNameVar = 69;

// FUNCTION OVERLOADING, basically creating equally named functions that receive
// different kinds of data, c++ automatically uses the one that corresponds to the
// arg that you give (if it's a type accepted by your created functions ofcourse)

// RECURSION Function that calls itself, almost the same as a for, needs to have a 
// base case for ending the loop inside itself, seems usefull for extensive functionality
// based on loops
// EX:
int factorialFinder(int x) {
    if (x == 1) {
        return 1;
    }
    else {
        return x * factorialFinder(x - 1);
    }

}

void printNumber(int x) {
    cout << "printing and int" << endl;
}

void printNumber(float x) {
    cout << "printing a float now" << endl;
}

class FirstClass 
{
    // GOOD PROGRAMMING PRACTICE 
    // Proper way of having "public" variables, for order and less screw ups
    public:

        // CONSTRUCTOR, always named the same as the class, that way cpp knows 
        // what it is, is a function called automatically when you create an object
        // of the especific class, for EVERY object. Usually used for seting initial
        // variable values
        FirstClass(string z) {
            setName(z);
            cout << getName() << endl;;
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name;
};

int main()
{
    cout << factorialFinder(5) << endl;
    // Example of Unary Scope Definition Operator for local and global variables
    // Usually used for same-named variables of different types
    // :: "Variable name" uses the global one
    /*double sameNameVar = 21;
    cout << sameNameVar << " " << ::sameNameVar;*/


    // A function that has default values uses until they are overrided
    // this means it works even if the user doesn't give all the args
    // Ex: cout << volume(5,6);


    // STANDARD SWAP ALGORYTHM
    /*int a = 10, b = 5;
    swapA(a, b);
    cout << a << " " << b << " ";*/
}

//Computer programs work from thew top down so you gotta define functions befor
//the main space or for having better order FUNCTION PROTOTYPING create function outside
//main so the program knows to search for it when it finds it

void calculator()
{
    int a, b, sum;
    cout << "Yo enter two numbers you want to compare \n";


    cin >> a;
    cin >> b;

    sum = a + b;

    cout << "Their sum is: " << sum << endl;

    if (a > b) {
        cout << a << " is greater than " << b << endl;
    }
    else if (a == b) {
        cout << "Both numbers are equal";
    }
    else {
        cout << b << " is greater than " << a << endl;
    }
}

void printSomething()
{
    cout << "Something";
}

void printCrap(int x) 
{
    cout << "Mupet's favorite number is " << x << endl;
}

int addNumbers(int x, int y)
{
    int answer = x + y;
    return answer;
}

int loopSum()
{
    int x = 0;
    int number = 0;
    int total = 0;

    while (x < 5) {
        cin >> number;
        total += number;
        x++;
    }

    return total;
}

void elegantNumIdentifier() 
{
    int givenNumber = 1;
    int laps = 0;
    int iteratedNumber = 0;
    int elegantEquation = 0;

    /*cout << "Please enter the desired number" << endl;
    cin >> givenNumber;*/

    while (givenNumber <= 100)
    {
        iteratedNumber = givenNumber;

        while (iteratedNumber != 1 && iteratedNumber != 4 && laps < 10)
        {
            while (iteratedNumber > 0) {
                int digit = iteratedNumber % 10;
                iteratedNumber /= 10;
                
                elegantEquation += pow(digit, 2);
            }
        
            iteratedNumber = elegantEquation;
            elegantEquation = 0;

            if (iteratedNumber == 4) { laps++; }

            /*cout << iteratedNumber << endl;*/
            /*cout << "Please enter next number or enter -1 to quit" << endl;
            cin >> givenNumber;*/
        }

        if (iteratedNumber == 1) {
            cout << givenNumber << " ELEGANT \n \n";
        }
        else {
            cout << givenNumber << " Such inelegant bitch \n \n";
        }
        laps = 0;
        givenNumber++;
    }  
}
 
void twoByTwoDigits() 
{
    string number;

    cout << "Type a five digit number: ";
    cin >> number;

    cout << "Primero: " << number.at(0) << endl;
    cout << "Segundo: " << number.at(1) << number.at(2) << endl;
    cout << "Tercero: " << number.at(3) << number.at(4) << endl;
}

void primerNumberDecomposition() 
{
    int primeNumber, half;

    cout << "Enter the number that you want to chop up: ";
    cin >> primeNumber;

    cout << "\n";
    cout << primeNumber << "|";

    half = primeNumber / 2;

    for (int i = 2; i <= primeNumber; i++)
    {
        if (primeNumber % i == 0) 
        {
            int division = primeNumber / i;
            if (division % 2 != 0 || primeNumber == 4) 
            {
                cout << i << endl;
                if (division == 1)
                {
                    cout << division << endl;
                    break;
                }
                else if (division < 10 && primeNumber > 10) {
                    cout << division << " |";
                }
                else
                {
                    cout << division << "|";
                }
                primeNumber = division;
                i = 1;
            }
        }
    }
}

void trianglePiramids() 
{
    int n = 1;
    int z = 0;

    for (int piramidNum = 0; piramidNum < 3; piramidNum++)
    {
        n = 1;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < n; j++)
            {
                switch (piramidNum) {
                case 0:
                    cout << "1" << " ";
                    if (j == n - 1) {
                        cout << endl;
                    }
                    break;
                case 1:
                    cout << j + 1 << " ";
                    if (j == n - 1) {
                        cout << endl;
                    }
                    break;
                case 2:
                    z++;
                    cout << z << " ";
                    if (j == n - 1) {
                        cout << endl;
                    }
                    break;
                }
            }
            n++;
            if (n == 6) {
                n = 0;
            }
        }
        cout << "\n \n";
    }
}

void date() 
{
    int seconds;

    cout << "Ingrese segundo a convertir: ";
    cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    cout << "Hour: " << hours << " Minutes: " << minutes << " Seconds: " << seconds;
}

void twoAndPrimes() 
{
    int number; 

    cout << "Give a number: ";
    cin >> number;

    for (int i = 2; i <= number; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && j != i)
            {
                cout << i << " ";
                break;
            }
            else if (j == i) {
                cout << "(" << i << ") ";
                break;
            }
        }
    }
}

void swapA(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void trueRandomGenerator() {

    // Defines rand seed, to generate trully "random" numbers
    srand(time(0));

    for (int i = 0; i < 25; i++)
    {
        cout << (rand() % 15) << endl;
    }
}

int volume(int l, int w, int h) {

    return l * w * h;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               