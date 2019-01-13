//Problem A: Oddness

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long int num,c,t,i;

    cin >> t;
    for (i=1; i<=t; i++)
    {
        c=0;
        cin >> num;

        while(num%2!=0)
        {
            num/=2;
            c++;
        }

        cout <<c <<endl;

    }

    return 0;
}
//completed
