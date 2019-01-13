//uva set - adhoc
//10200 - Prime Time
//Xplosive
//cio

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

#define READ(file) freopen(file, "r", stdin);
#define WRITE(file) freopen(file, "w", stdout);
#define PI acos(-1.0)


#define MAX 10005

using namespace std;

bool status[MAX];
void sieve_prime(long l)
{
    //index 0 is prime and 1 is unprime
    //at first all index are 0

    //0 and 1 is not prime
    status[0]=1;
    status[1]=1;
    status[2]=0;

    int sq = sqrt(l);
    int i,j;
    for(i=4; i<l; i+=2)      //all even number are unprime except 2
        status[i]=1;


    for(i=3; i*i<l ; i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*2; j<l; j+=i)
            {
                if(j%i==0)
                {
                    status[j]=1;
                }
            }
        }
    }
}

int main()
{
    READ("input.txt");
    //WRITE("output.txt");

//    int t, tt;
//    cin >> tt;


//    while(1)
//    {
//        int n;
//        cin >> n;
//        if(n==0)break;
//
//    }


    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {

        long d=abs(a-b);
        d=d*d+d+41;

        int c=0;
        for(int i=a; i<=b; i++)
        {
            if(status[i]==0)
            {
                c++;
            }
        }
        double r=1.0*d/c*100;

        cout << c << " " << d << " " << r << endl;


    }


    return 0;
}



/*

Sample input

0 39
0 40
39 40
1423 2222

Sample output

100.00
97.56
50.00
44.13

*/



