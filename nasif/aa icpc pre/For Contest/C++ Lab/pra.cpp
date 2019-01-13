//uva set - adhoc
//10473 - Simple Base Conversion
//Xplosive
//ac

//hex-dec-hex library, %X ,string to char array, atoi
//do hex-dec-hex manually

#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
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
#include<fstream>
#include<numeric>
#include<iterator>
#define ull unsigned long long
using namespace std;

#define mx 35



int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    vector<int>v;
    vector<int>::iterator it;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    while(1)
    {
        int m;
        scanf("%d",&m);

        //it= lower_bound(v.begin(),v.end(),m);
        //it= upper_bound(v.begin(),v.end(),m);

        if(it!=v.begin())
        {
            //it--;
            cout << *it << " ";
        }
        else
        {
            printf("x");
        }

    }

    return 0;
}


/*

Sample Input

4
1 4 5 7
4
4 6 8 10

Sample Output

1 5
5 7
7 X
7 X


*/
