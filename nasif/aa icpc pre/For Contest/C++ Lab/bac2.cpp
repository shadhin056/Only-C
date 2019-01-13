//contest name
//problem id - problem name
//Xplosive
//state

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

#define MAX 100000

vector<int> edge[MAX];
vector<int> cost[MAX];

vector<int>G[MAX];

void print_path(int par[],int source,int dest)
{
    int temp;
    while(temp!=source)
    {

        temp = par[dest];
        dest = temp;
        cout << temp << " ";
    }
    cout << endl;

}

void bfs_vector(int n, int source)
{
    vector<int> v1, v2;
    v1.push_back(source);

    int taken[MAX]= {0};
    taken[1]=1;

    cout << "Level 0:: " << source << endl;

    for(int loop=1; loop<n; loop++)
    {
        cout << "Level " << loop << ":: ";
        for(int i=0; i<v1.size(); i++)
        {
            int u= v1[i];
            for(int j=0; j<G[u].size(); j++)
            {
                int v = G[u][j];

                if(!taken[v])
                {
                    cout << v << " ";
                    taken[v] =1;
                    v2.push_back(v);
                }
            }
        }


        if(v2.empty())
        {
            cout << "Empty" << endl;
            break;
        }
        else
        {
            cout << endl;
            v1.clear();
            v1= v2;
            v2.clear();

        }
    }

}

void bfs_queue(int n, int source)
{
    queue<int>q;
    q.push(source);
    int taken[MAX]= {0};
    taken[1]=1;

    int distance[MAX];
    distance[source]=0;

    int parent[MAX];
    //parent[]

    //cout << "Level 0:: " << source << endl;

    while(!q.empty())
    {
        int u= q.front();
        for(int j=0; j<G[u].size(); j++)
        {
            int v = G[u][j];

            if(!taken[v])
            {

                //cout << v << " ";
                parent[v] = u;
                distance[v] = distance[u] + 1;
                taken[v] =1;
                q.push(v);
            }
        }

        q.pop();
    }

    for(int i=1; i<=n; i++)
    {
        //cout << source << " to " << i << " distance " << distance[i] << endl;
    }

    print_path(parent,source,10);


}



int main()
{

    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int N,E;

    cin >> N>> E;

    for(int i=1; i<=E; i++)
    {
        int x,y;
        cin >> x >> y;

        edge[x].push_back(y);
        G[x].push_back(y);
        if(x!=y)
        {
            edge[y].push_back(x);
            G[y].push_back(x);

        }
        cost[x].push_back(1);
        cost[y].push_back(1);
    }


    //bfs_vector(N,1);
    bfs_queue(N,1);


//    for(int i=1; i<=N; i++)
//    {
//
//        cout << "edge: " << i << " (" << edge[i].size() << ") - " ;
//
//        sort(edge[i].begin(),edge[i].end());
//
//        for(int j=0; j<edge[i].size(); j++)
//        {
//            cout << edge[i][j] << " ";
//        }
//
//        cout << endl;
//
//    }







    return 0;
}


/*

Sample input

6 8
1 2
1 4
2 4
2 5
4 5
5 3
3 6
6 6

-----------------------

10 13
1 2
1 4
1 3
2 6
4 7
3 7
3 8
6 10
7 9
7 8
8 5
9 10
5 10


Sample output


*/
