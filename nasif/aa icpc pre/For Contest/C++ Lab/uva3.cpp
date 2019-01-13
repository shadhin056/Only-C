//uva problem
//10683 - The decadary watch
//Xplosive
//nc


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


#define MAX 1000005

using namespace std;



int main()
{
    READ("input.txt");
    //WRITE("output.txt");

//    int t, tt;
//    cin >> tt;

//    for(t=1; t<=tt; t++)
//    {
////        if(t!=1)
////            printf("\n");
//
//       // printf("Case %d: ",t);
//
//
//    }

    long n;
    while(scanf("%ld",&n)!=EOF)
    {
        int h,m,s,c;

        c=n%100;
        n/=100;
        s=n%100;
        n/=100;
        m=n%100;
        n/=100;
        h=n%100;
        //n/=100;

        int tcc= h*60*60*100+m*60*100+s*100+c;

//        cout << tcc << endl;

//        h=tcc/(100*60*60);
//        tcc-= h*60*60*100;
//        m=tcc/(100*60);
//        tcc-= m*60*100;
//        s=tcc/(100);
//        tcc-= s*100;
//        c=tcc;

        //cout << tcc << " " << h << endl;
        //cout << h << m << s << c << endl;

        h=tcc/(100*100*100);
        tcc-= h*100*100*100;
        m=tcc/(100*100);
        tcc-= m*100*100;
        s=tcc/(100);
        tcc-= s*100;
        c=tcc;

        cout << h << m << s << c << endl;


    }





    return 0;
}



/*

Sample input

00000000
23595999
12000000
14273467
02475901

Sample output

0000000
9999998
5000000
6024846
1166552

*/




