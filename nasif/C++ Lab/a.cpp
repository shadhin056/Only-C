//gt
//336 - A Node Too Far
//Xplosive
//not completed...... program don't return 0


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

void bfs(int n, int src)
{
    //cout << "bfs" << endl;
    queue<int>q;
    int vis[MAX]= {0};
    int lvl[MAX];
    int par[MAX];

    q.push(src);
    lvl[src]=0;

    while(!q.empty())
    {
        int u = q.front();

        for(int i=1; i<=G[u].size(); i++)
        {
            int v= G[u][v];
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

void printGraph(int totalNode)
{
    cout << "Total Node: " << totalNode << endl;

    for(int i=0; i<totalNode; i++)
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

//    int t, tt;
//    cin >> tt;

    while(1)
    {
        int tEdge;
        cin >> tEdge;
        if(tEdge==0) break;
        cout << tEdge << endl;

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

            //clear G

            //cout << x << "  " << y << " : " << m[x] << "  " << m[y] << endl;

            G[m[x]].push_back(m[y]);
            if(x!=y)
            {
                G[m[y]].push_back(m[x]);
            }

            //printGraph(ass);

        }
        int tNode = ass;

        printGraph(tNode);

        int src,ttl;
        while(1)
        {
            cin>>src>>ttl;
            if(src==0&&ttl==0) break;

            it= m.find(src);
            int srcMap = it->second;

            //cout << "here" << endl;
            //bfs(tNode,srcMap);
        }

        //cout << "here" << endl;
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

*/



