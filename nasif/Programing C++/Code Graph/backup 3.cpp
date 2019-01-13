//uva set - graph
//336 - A Node Too Far
//Xplosive
//

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
using namespace std;

#define mx 35

 int src,ttl;

vector<int> edge[mx];
int visited[mx];
int total_node;
int Case =0;

void bfs(int src, int ttl)
{
    visited[src]=1;

    if(ttl==0)
        return;

    for(int j=0; j<edge[src].size(); j++)
    {
        int u= edge[src][j];
        int temp = ttl-1;
        bfs(u,temp);
    }

}

int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    while(cin>>E)
    {
        int E;
        if(E==0)
            break;

        map<int,int> mymap;
        map<int,int> ::iterator it;
        int ass = 0;

        //int taken[mx]= {0};

        for(int i=0; i<=mx; i++)
        {
            edge[i].clear();
        }
        mymap.clear();

        for(int i=1; i<=E; i++)
        {
            int x,y;
            cin >> x >> y;

            if(mymap.find(x)==mymap.end())
            {
                mymap[x] = ++ass;
            }
            if(mymap.find(y)==mymap.end())
            {
                mymap[y] = ++ass;
            }

            edge[mymap[x]].push_back(mymap[y]);
            if(mymap[x]!=mymap[y])
            {
                edge[mymap[y]].push_back(mymap[x]);
            }

        }
        total_node = ass;

        while(cin >> src>> ttl)
        {
           
            if(src==0 && ttl==0)
                break;

            memset(visited,0,sizeof(visited));


            it = mymap.find(src);
            //cout << "source " <<it->first << " " << it->second << endl;
            int src_map = it->second;

            bfs(src_map,ttl);

            int ans=0;
            for(int i=1; i<=total_node; i++)
            {
                if(visited[i]==0)
                {
                    ans++;
                }
            }

            cout << "Case " << ++Case << ": " << ans << " nodes not reachable from node " << src << " with TTL = " << ttl << "." << endl;


        }


//        for(int i=1; i<=total_node; i++)
//        {
//
//            cout << "edge: " << i << " (" << edge[i].size() << ") - " ;
//
//            sort(edge[i].begin(),edge[i].end());
//
//            for(int j=0; j<edge[i].size(); j++)
//            {
//                cout << edge[i][j] << " ";
//            }
//
//            cout << endl;
//
//        }


    }

    return 0;
}


/*

Sample input

16
10 15   15 20   20 25   10 30   30 47   47 50   25 45   45 65
15 35   35 55   20 40   50 55   35 40   55 60   40 60   60 65
35  2   35  3    0  0

14
1 2   2 7   1 3   3 4   3 5   5 10   5 11
4 6   7 6   7 8   7 9   8 9   8  6   6 11
1 1   1 2   3 2   3 3   0 0

0

Sample output

Case 1: 5 nodes not reachable from node 35 with TTL = 2.
Case 2: 1 nodes not reachable from node 35 with TTL = 3.
Case 3: 8 nodes not reachable from node 1 with TTL = 1.
Case 4: 5 nodes not reachable from node 1 with TTL = 2.
Case 5: 3 nodes not reachable from node 3 with TTL = 2.
Case 6: 1 nodes not reachable from node 3 with TTL = 3.


*/
