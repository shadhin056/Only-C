//uva set - adhoc
//10849 - Move the bishop
//Xplosive
//wa

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


    int tt;
    cin >> tt;



    while(tt--)
    {
        int C;
        cin >> C;

        ull n;
        cin >> n;

        ull a,b,c,d;
        while(C--)
        {
            cin >> a >> b >> c >> d;

            if(a+b==c+d)
            {
                cout << "1" << endl;
            }
            else if((a+b)%2==(c+d)%2)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "no move" << endl;
            }
        }
    }



    return 0;
}


/*

Sample Input

2

3
8
3 6 6 3
4 2 2 3
7 2 1 4

2
6
1 2 6 5
2 3 5 1

Sample Output

1
no move
2
2
no move


*/
