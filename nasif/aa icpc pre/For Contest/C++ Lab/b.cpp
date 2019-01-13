//gt
//336 - A Node Too Far
//Xplosive
//c


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


#define MAX 35

using namespace std;


vector<int>G[MAX];
//set<int>G[MAX];

void bfs(int n, int src,int ttl,int mainSrc)
{
    //cout << "bfs start" << endl;
    queue<int>q;
    int vis[MAX]= {0};
    int lvl[MAX];
    int par[MAX];

    q.push(src);
    lvl[src]=0;
    vis[src]=1;

    while(!q.empty())
    {
        int u = q.front();
        //cout << "here u: " << u << "\tU Size: " << G[u].size() << endl;
        for(int i=0; i<G[u].size(); i++)
        {
            int v= G[u][i];
            //cout << v << " ";
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
//    for(int i=1; i<=n; i++)
//    {
//        printf("%d to %d distance %d\n",src,i,lvl[i]);
//    }

    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(ttl<lvl[i])
        {
            c++;
        }
    }

    printf("%d nodes not reachable from node %d with TTL = %d.\n",c,mainSrc,ttl);

}

void clearGraph(int tNode)
{
    for(int i=1; i<=tNode; i++)
    {
        G[i].clear();
    }
}

void printGraph(int totalNode)
{
    cout << "Total Node: " << totalNode << endl;

    for(int i=1; i<=totalNode; i++)
    {
        int u=i;
        cout << i << " -> ";
        for(int j=0; j<G[i].size(); j++)
        {
            cout << G[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\n\n";

}



int main()
{
    READ("input.txt");
    //WRITE("output.txt");

    int t=0, tt;
//    cin >> tt;


    while(1)
    {
        int tEdge;
        cin >> tEdge;
        if(tEdge==0) break;
        //cout << tEdge << endl;

        map<int,int> m;
        map<int,int>::iterator it;
        int ass = 0;

        int x,y;
        for(int i=0; i<tEdge; i++)
        {
            cin >> x>> y;

//            G[x].push_back(y);
//            if(x!=y)
//            {
//                G[y].push_back(x);
//            }

            if(m.find(x)==m.end())
            {
                m[x]= ++ass;
            }
            if(m.find(y)==m.end())
            {
                m[y]= ++ass;
            }

            //cout << x << "  " << y << " : " << m[x] << "  " << m[y] << endl;

            G[m[x]].push_back(m[y]);
            if(x!=y)
            {
                G[m[y]].push_back(m[x]);
            }

        }
        int tNode = ass;

        //printGraph(tNode);

        int src,ttl;
        int c=0;
        while(1)
        {
            cin>>src>>ttl;
            if(src==0&&ttl==0) break;

            printf("Case %d: ",++t);

            it= m.find(src);
            int srcMap = it->second;

            //cout << src << "  " << srcMap << endl;
            //bfs(tNode,srcMap);
            bfs(tNode,srcMap,ttl,src);
            //cout << "bfs complete" << endl;
        }

         //clear G
        clearGraph(tNode);

    }



    return 0;
}



/*

Sample Input

16
10 15   15 20   20 25   10 30   30 47   47 50   25 45   45 65
15 35   35 55   20 40   50 55   35 40   55 60   40 60   60 65
35  2   35  3    0  0

14
1 2   2 7   1 3   3 4   3 5   5 10   5 11
4 6   7 6   7 8   7 9   8 9   8  6   6 11
1 1   1 2   3 2   3 3   0 0

0

Sample Output

Case 1: 5 nodes not reachable from node 35 with TTL = 2.
Case 2: 1 nodes not reachable from node 35 with TTL = 3.
Case 3: 8 nodes not reachable from node 1 with TTL = 1.
Case 4: 5 nodes not reachable from node 1 with TTL = 2.
Case 5: 3 nodes not reachable from node 3 with TTL = 2.
Case 6: 1 nodes not reachable from node 3 with TTL = 3.


----------------------------------------------------------
ac input

16
10 15  15 20  20 25  10 30  30 47  47 50  25 45  45 65
15 35  35 55  20 40  50 55  35 40  55 60  40 60  60 65
35  2  35  3   0  0

14
1 2  2 7  1 3  3 4  3 5  5 10  5 11
4 6  7 6  7 8  7 9  8 9  8  6  6 11
1 1  1 2  3 2  3 3  0 0
16
10 15  15 20  20 25  10 30  30 47  47 50  25 45  45 65
15 35  35 55  20 40  50 55  35 40  55 60  40 60  60 65
35  2  35  3   1  3   0  0

16
1 2  2 7  1 3  3 4  3 5  5 10  5 11
4 6  7 6  7 8  7 9  8 9  8  6  6 11 21 22 22 23
1 1  1 2  3 2  3 3  21 1 0 0

1
1 3
2 0
0 0

1
1 1
1 0
0 0

4
1 2 2 3 4 5 5 6
1 5 1 1 4 2 0 0

4
1 2
2 3
3 4
1 4
1 1
1 2
1 3
1 0
0 0


5
1 2 2 3 3 1 4 5 6 2147483647
1 1 1 0 4 1 4 2 5 1 6 2 8 2 0 0

10
1 2 1 3 3 5 2 5 3 4 5 4 6 4 7 10 10 9 8 9
2 3 7 2 10 1 0 0

4
0 0 1 2 2 3 4 4
1 0 1 1 1 2 1 3 1 4 2 0 2 1 2 2 2 3 2 4 3 0 3 1 3 2 3 3 4 0 4 1 4 2
0 0

30
1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 0 0 1
11 12 12 13 13 14 14 15 15 16 16 17 17 18 18 19 19 20 20 1
21 22 22 23 23 24 24 25 25 26 26 27 27 28 28 29 29 30 30 1
1 0 1 1 1 2 1 3 1 4 1 5 1 6 1 7 1 8 1 9 1 10 1 11 1 12 1 13 1 14 1 15 1 16
1 17 1 18 1 19 1 20 1 21 18 0 18 1 18 2 18 3 18 4 18 5 18 6 18 7 18 8 18 9
18 10 18 11 18 12 18 13 18 14 18 15 0 0
32
1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 0 0 1 5 14 24 13
11 12 12 13 13 14 14 15 15 16 16 17 17 18 18 19 19 20 20 1
21 22 22 23 23 24 24 25 25 26 26 27 27 28 28 29 29 30 30 1
1 0 1 1 1 2 1 3 1 4 1 5 1 6 1 7 1 8 1 9 1 10 1 11 1 12 1 13 1 14 1 15 1 16
1 17 1 18 1 19 1 20 1 21 18 0 18 1 18 2 18 3 18 4 18 5 18 6 18 7 18 8 18 9
18 10 18 11 18 12 18 13 18 14 18 15 0 0
3
1 2 2 3 4 5
1 0 1 1 1 2 1 3 2 0 2 1 2 2 2 3 3 0 3 1 3 2 3 3 4 0 4 1 4 2 4 3 5 0 5 1 5 2 5 3
0 0

1
10 11
10 0 10 1 10 2 12 1 10 0 10 1 10 2 0 0
0



ac output

Case 1: 5 nodes not reachable from node 35 with TTL = 2.
Case 2: 1 nodes not reachable from node 35 with TTL = 3.
Case 3: 8 nodes not reachable from node 1 with TTL = 1.
Case 4: 5 nodes not reachable from node 1 with TTL = 2.
Case 5: 3 nodes not reachable from node 3 with TTL = 2.
Case 6: 1 nodes not reachable from node 3 with TTL = 3.
Case 7: 5 nodes not reachable from node 35 with TTL = 2.
Case 8: 1 nodes not reachable from node 35 with TTL = 3.
Case 9: 3 nodes not reachable from node 1 with TTL = 3.
Case 10: 11 nodes not reachable from node 1 with TTL = 1.
Case 11: 8 nodes not reachable from node 1 with TTL = 2.
Case 12: 6 nodes not reachable from node 3 with TTL = 2.
Case 13: 4 nodes not reachable from node 3 with TTL = 3.
Case 14: 12 nodes not reachable from node 21 with TTL = 1.
Case 15: 1 nodes not reachable from node 2 with TTL = 0.
Case 16: 0 nodes not reachable from node 1 with TTL = 0.
Case 17: 3 nodes not reachable from node 1 with TTL = 5.
Case 18: 4 nodes not reachable from node 1 with TTL = 1.
Case 19: 3 nodes not reachable from node 4 with TTL = 2.
Case 20: 1 nodes not reachable from node 1 with TTL = 1.
Case 21: 0 nodes not reachable from node 1 with TTL = 2.
Case 22: 0 nodes not reachable from node 1 with TTL = 3.
Case 23: 3 nodes not reachable from node 1 with TTL = 0.
Case 24: 4 nodes not reachable from node 1 with TTL = 1.
Case 25: 6 nodes not reachable from node 1 with TTL = 0.
Case 26: 5 nodes not reachable from node 4 with TTL = 1.
Case 27: 5 nodes not reachable from node 4 with TTL = 2.
Case 28: 5 nodes not reachable from node 5 with TTL = 1.
Case 29: 5 nodes not reachable from node 6 with TTL = 2.
Case 30: 4 nodes not reachable from node 8 with TTL = 2.
Case 31: 4 nodes not reachable from node 2 with TTL = 3.
Case 32: 7 nodes not reachable from node 7 with TTL = 2.
Case 33: 7 nodes not reachable from node 10 with TTL = 1.
Case 34: 4 nodes not reachable from node 1 with TTL = 0.
Case 35: 3 nodes not reachable from node 1 with TTL = 1.
Case 36: 2 nodes not reachable from node 1 with TTL = 2.
Case 37: 2 nodes not reachable from node 1 with TTL = 3.
Case 38: 2 nodes not reachable from node 1 with TTL = 4.
Case 39: 4 nodes not reachable from node 2 with TTL = 0.
Case 40: 2 nodes not reachable from node 2 with TTL = 1.
Case 41: 2 nodes not reachable from node 2 with TTL = 2.
Case 42: 2 nodes not reachable from node 2 with TTL = 3.
Case 43: 2 nodes not reachable from node 2 with TTL = 4.
Case 44: 4 nodes not reachable from node 3 with TTL = 0.
Case 45: 3 nodes not reachable from node 3 with TTL = 1.
Case 46: 2 nodes not reachable from node 3 with TTL = 2.
Case 47: 2 nodes not reachable from node 3 with TTL = 3.
Case 48: 4 nodes not reachable from node 4 with TTL = 0.
Case 49: 4 nodes not reachable from node 4 with TTL = 1.
Case 50: 4 nodes not reachable from node 4 with TTL = 2.
Case 51: 29 nodes not reachable from node 1 with TTL = 0.
Case 52: 25 nodes not reachable from node 1 with TTL = 1.
Case 53: 21 nodes not reachable from node 1 with TTL = 2.
Case 54: 17 nodes not reachable from node 1 with TTL = 3.
Case 55: 13 nodes not reachable from node 1 with TTL = 4.
Case 56: 10 nodes not reachable from node 1 with TTL = 5.
Case 57: 8 nodes not reachable from node 1 with TTL = 6.
Case 58: 6 nodes not reachable from node 1 with TTL = 7.
Case 59: 4 nodes not reachable from node 1 with TTL = 8.
Case 60: 2 nodes not reachable from node 1 with TTL = 9.
Case 61: 0 nodes not reachable from node 1 with TTL = 10.
Case 62: 0 nodes not reachable from node 1 with TTL = 11.
Case 63: 0 nodes not reachable from node 1 with TTL = 12.
Case 64: 0 nodes not reachable from node 1 with TTL = 13.
Case 65: 0 nodes not reachable from node 1 with TTL = 14.
Case 66: 0 nodes not reachable from node 1 with TTL = 15.
Case 67: 0 nodes not reachable from node 1 with TTL = 16.
Case 68: 0 nodes not reachable from node 1 with TTL = 17.
Case 69: 0 nodes not reachable from node 1 with TTL = 18.
Case 70: 0 nodes not reachable from node 1 with TTL = 19.
Case 71: 0 nodes not reachable from node 1 with TTL = 20.
Case 72: 0 nodes not reachable from node 1 with TTL = 21.
Case 73: 29 nodes not reachable from node 18 with TTL = 0.
Case 74: 27 nodes not reachable from node 18 with TTL = 1.
Case 75: 25 nodes not reachable from node 18 with TTL = 2.
Case 76: 23 nodes not reachable from node 18 with TTL = 3.
Case 77: 19 nodes not reachable from node 18 with TTL = 4.
Case 78: 15 nodes not reachable from node 18 with TTL = 5.
Case 79: 11 nodes not reachable from node 18 with TTL = 6.
Case 80: 7 nodes not reachable from node 18 with TTL = 7.
Case 81: 5 nodes not reachable from node 18 with TTL = 8.
Case 82: 4 nodes not reachable from node 18 with TTL = 9.
Case 83: 3 nodes not reachable from node 18 with TTL = 10.
Case 84: 2 nodes not reachable from node 18 with TTL = 11.
Case 85: 1 nodes not reachable from node 18 with TTL = 12.
Case 86: 0 nodes not reachable from node 18 with TTL = 13.
Case 87: 0 nodes not reachable from node 18 with TTL = 14.
Case 88: 0 nodes not reachable from node 18 with TTL = 15.
Case 89: 29 nodes not reachable from node 1 with TTL = 0.
Case 90: 25 nodes not reachable from node 1 with TTL = 1.
Case 91: 21 nodes not reachable from node 1 with TTL = 2.
Case 92: 17 nodes not reachable from node 1 with TTL = 3.
Case 93: 13 nodes not reachable from node 1 with TTL = 4.
Case 94: 9 nodes not reachable from node 1 with TTL = 5.
Case 95: 6 nodes not reachable from node 1 with TTL = 6.
Case 96: 4 nodes not reachable from node 1 with TTL = 7.
Case 97: 2 nodes not reachable from node 1 with TTL = 8.
Case 98: 1 nodes not reachable from node 1 with TTL = 9.
Case 99: 0 nodes not reachable from node 1 with TTL = 10.
Case 100: 0 nodes not reachable from node 1 with TTL = 11.
Case 101: 0 nodes not reachable from node 1 with TTL = 12.
Case 102: 0 nodes not reachable from node 1 with TTL = 13.
Case 103: 0 nodes not reachable from node 1 with TTL = 14.
Case 104: 0 nodes not reachable from node 1 with TTL = 15.
Case 105: 0 nodes not reachable from node 1 with TTL = 16.
Case 106: 0 nodes not reachable from node 1 with TTL = 17.
Case 107: 0 nodes not reachable from node 1 with TTL = 18.
Case 108: 0 nodes not reachable from node 1 with TTL = 19.
Case 109: 0 nodes not reachable from node 1 with TTL = 20.
Case 110: 0 nodes not reachable from node 1 with TTL = 21.
Case 111: 29 nodes not reachable from node 18 with TTL = 0.
Case 112: 27 nodes not reachable from node 18 with TTL = 1.
Case 113: 25 nodes not reachable from node 18 with TTL = 2.
Case 114: 23 nodes not reachable from node 18 with TTL = 3.
Case 115: 19 nodes not reachable from node 18 with TTL = 4.
Case 116: 14 nodes not reachable from node 18 with TTL = 5.
Case 117: 8 nodes not reachable from node 18 with TTL = 6.
Case 118: 3 nodes not reachable from node 18 with TTL = 7.
Case 119: 1 nodes not reachable from node 18 with TTL = 8.
Case 120: 0 nodes not reachable from node 18 with TTL = 9.
Case 121: 0 nodes not reachable from node 18 with TTL = 10.
Case 122: 0 nodes not reachable from node 18 with TTL = 11.
Case 123: 0 nodes not reachable from node 18 with TTL = 12.
Case 124: 0 nodes not reachable from node 18 with TTL = 13.
Case 125: 0 nodes not reachable from node 18 with TTL = 14.
Case 126: 0 nodes not reachable from node 18 with TTL = 15.
Case 127: 4 nodes not reachable from node 1 with TTL = 0.
Case 128: 3 nodes not reachable from node 1 with TTL = 1.
Case 129: 2 nodes not reachable from node 1 with TTL = 2.
Case 130: 2 nodes not reachable from node 1 with TTL = 3.
Case 131: 4 nodes not reachable from node 2 with TTL = 0.
Case 132: 2 nodes not reachable from node 2 with TTL = 1.
Case 133: 2 nodes not reachable from node 2 with TTL = 2.
Case 134: 2 nodes not reachable from node 2 with TTL = 3.
Case 135: 4 nodes not reachable from node 3 with TTL = 0.
Case 136: 3 nodes not reachable from node 3 with TTL = 1.
Case 137: 2 nodes not reachable from node 3 with TTL = 2.
Case 138: 2 nodes not reachable from node 3 with TTL = 3.
Case 139: 4 nodes not reachable from node 4 with TTL = 0.
Case 140: 3 nodes not reachable from node 4 with TTL = 1.
Case 141: 3 nodes not reachable from node 4 with TTL = 2.
Case 142: 3 nodes not reachable from node 4 with TTL = 3.
Case 143: 4 nodes not reachable from node 5 with TTL = 0.
Case 144: 3 nodes not reachable from node 5 with TTL = 1.
Case 145: 3 nodes not reachable from node 5 with TTL = 2.
Case 146: 3 nodes not reachable from node 5 with TTL = 3.
Case 147: 1 nodes not reachable from node 10 with TTL = 0.
Case 148: 0 nodes not reachable from node 10 with TTL = 1.
Case 149: 0 nodes not reachable from node 10 with TTL = 2.
Case 150: 0 nodes not reachable from node 12 with TTL = 1.
Case 151: 1 nodes not reachable from node 10 with TTL = 0.
Case 152: 0 nodes not reachable from node 10 with TTL = 1.
Case 153: 0 nodes not reachable from node 10 with TTL = 2.

*/



