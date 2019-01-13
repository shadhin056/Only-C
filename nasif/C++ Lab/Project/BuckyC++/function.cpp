#include <iostream>
using namespace std;


int add (int a, int b)
{
    return a+b;
}


int read ()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    return a;
}

void write (int a)
{
    cout << "The Output is: "<< a<<endl;
}

void staticuse ()
{
    static int i=0;
    i++;
    cout << i << endl;
}
