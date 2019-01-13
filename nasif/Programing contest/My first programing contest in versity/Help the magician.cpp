//Problem G: Help the magician

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long int sn,l, i,d,t,j;

    long long int a[100001];

    cin >> t;
    for(j=1; j<=t; j++)
    {
        l=0;
        cin >> sn;

        for(i=0; i<sn; i++)
        {
            cin >> a[i];
        }

        for(i=0; i<sn-1; i++)
        {
            d=a[i]-a[i+1];

            if(d<0)
                d=d*(-1);
            l+=d;
        }

        cout << "Case "<< j << ": " << l <<endl;

    }



    return 0;
}

//
