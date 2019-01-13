//pro - pra

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

int func(int a)
{
    int sum=1,b;
    while(a>=10)
    {
        b=a%10;
        sum*=b;
        a=a/10;
    }
    sum*=a;
    printf("%d ",sum);
    if(sum>9)
    {

        return func(sum);
        //printf("%d ",sum);
        //if(sum>10)
        //return func(sum);
        return (sum);
    }
}
int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        printf("%d ",n);
        if(n>9)
            func(n);
        printf("\n");
    }



    return 0;
}

/*

Sample input


Sample output


*/

