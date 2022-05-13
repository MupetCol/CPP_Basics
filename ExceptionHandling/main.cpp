#include <iostream>

using namespace std;

int main()
{
    try{
        int momsAge = 30;
        int sonsAge = 34;

        if(sonsAge > momsAge){
            throw 99;
        }

    }catch(...){
        cout << "Sons can't be older than their parents dumbass" << endl;
    /*catch(int x){
        cout << "Sons can't be older than their parents dumbass, Error number: " << x << endl;
    }

    //CATCH BY DATA TYPE
    try
    {
        cout<<"Enter any choice: ";
        cin>>choice;

        if(choice == 0)         cout<<"Hello Baby!"<<endl;
        else if(choice == 1)    throw (100);    //throw integer value
        else if(choice == 2)    throw ('x');    //throw character value
        else if(choice == 3)    throw (1.23f);  //throw float value
        else    cout<<"Bye Bye !!!"<<endl;
    }
    catch(int a)
    {
        cout<<"Integer Exception Block, value is: "<<a<<endl;
    }
    catch(char b)
    {
        cout<<"Character Exception Block, value is: "<<b<<endl;
    }
    catch(float c)
    {
        cout<<"Float Exception Block, value is: "<<c<<endl;
    }

    return 0;
    */
    }
}
