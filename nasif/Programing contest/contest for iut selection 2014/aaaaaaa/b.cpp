//pro - b

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


int printResult(int n)
{
    int p=1;

    while(n)
    {
        p*= n%10;
        n = n/10;
    }

    printf("%d ",p);

    if(p>10)
    {
        return printResult(p);
    }

    //return s;


}

int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t,tt;
    //cin>> tt;

    //int f=0;


    int n,r;
    while(1)
    {
//        if(f==1)
//            printf("\n");

        scanf("%d",&n);

        if(n==0)
            break;

        printf("%d ",n);

        if(n>9)
            r = printResult(n);


        //f = 1;
        printf("\n");

    }

    return 0;
}

/*

Sample input


Sample output


*/

