//icpc prelemenary 2014
//prob - a
//fine

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <fstream>
#include <numeric>
#include <iterator>
#include <bitset>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iomanip>
//#include <conio.h>    //this will give u compile error in contest

using namespace std;

//file must
#define READ(file) freopen(file, "r", stdin)
#define WRITE(file) freopen(file, "w", stdout)

//constant must
#define PI acos(-1.0)
#define pi 2*acos(0.0)
#define INF   1<<30      //infinity value
#define EPS   1e-9

//type must
#define ll long long
#define ull unsigned long long

//for stl must
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
#define all(v) v.begin(),v.end()



//debug
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define dbg(a) cout << #a << " -> " << a << endl;
#define dbgarr(a,start,end) for(int i=start;i<=end;i++) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define dbgvec(a,start,end) for(int i=start;i<=end;i++) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define parr(a) for(int i=0;i<arrl(a);i++) cout<<a[i]<<" "; cout << endl;
#define pvec(a) for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout << endl;
#define pmat(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<mat[i][j]<<" ";cout<<endl;}


//usefull function
#define mem(a,n) memset(a,n,sizeof(a))
#define arrl(a) sizeof(a)/sizeof(*(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))


//variable
#define MAX 1100

int coinCount=0;

int deal;
int make;
int dp[MAX][MAX];
int coin[MAX];

int call(int i, int amount)
{
    if(i>=deal)
    {
        if(amount==make) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];

    int ret1=0, ret2=0;
    if(amount+coin[i]<=make)
    {
        ret1=call(i+1,amount+coin[i]);

        if(ret1)
            coinCount++;

    }

    ret2=call(i+1,amount);

    if(ret2)
            coinCount++;

    dp[i][amount]=ret1+ret2;
    return dp[i][amount];
}

long long fac(int n)
{
    if(n==0) return 1;
    return n*fac(n-1);
}


int main()
{
    READ("input.txt");
    //WRITE("output.txt");

    int t, tt,n,k,a[MAX];
    cin >> tt;

    for(t=1; t<=tt; t++)
    {
//        if(t!=1) cout << endl;
//        cout << "Case #" << t << ":" << endl;
//        scanf("%d%d",&n,&k);
//        for(int i=0; i<n; i++)
//        {
//            scanf("%d",&coin[i]);
//        }
//
//        //dbgarr()
//
//        deal=n;
//        make =k;
//        mem(dp,-1);
//        cout << call(0,0) << endl;
//        cout << coinCount << endl;
//


    }

    cout << fac(4) << endl;




    return 0;
}




/*

Sample Input

2
5 5
1 2 3 3 6
5 6
1 2 3 3 6

Sample Output



*/

