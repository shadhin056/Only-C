#include<stdio.h>
#include<iostream>
#include<cstdlib>
using namespace std;

void han(int n, char a, char b, char c)
{
    if(n==1)
    {
        cout << a << "-->" << c << endl;
    }
    else
    {
        han(n-1,a,c,b);
        han(1,a,b,c);
        han(n-1,b,a,c);
    }

}

int main()
{
    han(3,'a','b','c');

    return 0;
}
