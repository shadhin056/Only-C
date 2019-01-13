//icpc selction versity
//
//Xplosive
//

#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<map>

#define pi 3.1415926535

using namespace std;
int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t,tt;

    cin>> tt;

    for(t=1; t<=tt; t++)
    {
        double r,d;

        cin >> r;

        if(r<0.0)
        {
            cout << "Invalid Input.\n";
        }
        else
        {
            r/=100.0;

            d=4*pi*r*r;

            printf("A ball with radius %0.2lf has a surface area of %0.4lf square meters.\n",r,d);
        }


    }


    return 0;
}

/*

Sample input

3
10
-15
65

Sample output


*/
