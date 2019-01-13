//pro - c

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
#include<iterator>
#include <sstream>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>

#define pi 3.1415926535
#define Pi acos(-1.0)
#define max 100

using namespace std;

int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t,tt;
    //cin>> tt;

    unsigned long long int n;

    int c;
    while(scanf("%d",&tt)==1)
    {
        c=0;
        for(t=1; t<=tt; t++)
        {
            scanf("%llu",&n);

            if(n%2!=0)
            {
                c++;
            }
        }

        if(c%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }


    }




    return 0;
}

/*

Sample input


Sample output


*/

