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
#define MAX 1100000

bool check(int m, int d)
{
    if(m==0||d==0) return false;
    if(m>12||d>31)
        return false;

    if(m==2)
    {
        if(d>28)
        {
            return false;
        }
    }

    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        if(d>31)
            return false;
    }
    else
    {
        if(d>30)
            return false;
    }


    return true;
}


bool func(int m1, int d1, int m2, int d2)
{
   // bool flag = true;

    if(!check(m1,d1))
        return false;

    if(!check(m2,d2))
        return false;



    if(m1<m2)
    {
        return true;
    }
    if(m1==m2)
    {
        if(d1<d2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;

}

int main()
{
    //READ("input.txt");
    //WRITE("output.txt");

    int t, tt;
    cin >> tt;

    for(t=1; t<=tt; t++)
    {
        //if(t!=1) cout << endl;
        //cout << "Case " << t << ": " ;
        printf("Case %d: ",t);

        int a,b,c,d;

        //cin>> a>>b>>c>>d;
        scanf("%d%d%d%d",&a,&b,&c,&d);

        int co=0;
        if(func(a,b,c,d))
        {
            co++;
        }
        if(func(b,a,d,c))
        {
            co++;
        }

        //cout << co << endl;

        if(co==1)
        {
            printf("Okay got it!\n");
        }
        else if(co==2)
        {
            printf("Oh no it is ambiguous!\n");
        }
        else if(co==0)
        {
            printf("I am sure there is some kinda mistake!\n");
        }

    }


    return 0;
}




/*

Sample Input

5 1 2 1 20 1 2 4 3 3 4 1 2 13 14 1 2 1 1 1 1

Sample Output



*/

