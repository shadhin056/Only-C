//gt
//gt - bsf
//Xplosive
//


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


#define MAX 105

using namespace std;

vector<int>edge[MAX];

void bsf(int n, int src)
{
    queue<int>q;
    int vis[MAX]={0};
    int lvl[MAX];
    int par[MAX];

    q.push(src);
    lvl[src]=0;

    while(!q.empty())
    {
        int u = q.front();

        for(int i=0; i<edge[u].size(); i++)
        {
            int v= edge[u][v];
            if(!vis[v])
            {
                lvl[v]=lvl[u]+1;
                par[v]=u;
                vis[v]=1;
                q.push(v);
            }
        }
        q.pop();
    }
//    for(int i=0; i<=n; i++)
//    {
//        printf("%d to %d distance %d",src,i,lvl[i]);
//    }

}

int main()
{
    //READ("input.txt");
    //WRITE("output.txt");

//    int t, tt;
//    cin >> tt;






    return 0;
}



/*

Sample Input
4
1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 0 1 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 1 1 0
1 1 1 1
0 1 0 1
0

Sample Output
OK
Change bit (2,3)
Corrupt

*/


