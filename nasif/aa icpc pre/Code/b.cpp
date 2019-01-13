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


int main()
{
    //READ("input.txt");
    //WRITE("output.txt");

    int t, tt;
    cin >> tt;

    for(t=1; t<=tt; t++)
    {
        //if(t!=1) cout << endl;
        //cout << "Case #" << t << ":" << endl;
            printf("Case %d: ",t);

            double a,b,c;

            scanf("%lf%lf%lf",&a,&b,&c);

            double as= a*a+b*b+c*c;

            double r = (2*a*a*c)/as;

            printf("%.8lf\n",r);


    }




    return 0;
}




/*

Sample Input



Sample Output



*/

