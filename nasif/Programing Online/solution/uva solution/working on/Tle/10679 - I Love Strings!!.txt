//uva problem
//10679 - I Love Strings!!
//Xplosive
//tle


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
    //READ("input.txt");
    //WRITE("output.txt");

    int t, tt;
    cin >> tt;

    for(t=1; t<=tt; t++)
    {
//        if(t!=1)
//            printf("\n");

       // printf("Case %d: ",t);

       string s,s2;
       cin>>s;

       int n;
       cin>>n;

       for(int i=0; i<n; i++)
       {
           cin>>s2;
           int p=s.find(s2);
           if(p!=-1) cout << "y" << endl;
           else cout << "n" << endl;
       }


    }



    return 0;
}



/*

Sample Input

2
abcdefghABCDEFGH
2
abc
abAB
xyz
1
xyz

Sample Output

y
n
y

*/



