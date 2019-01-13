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

void pVectorIt(vector<int>v)
{
    //vector<int>v;
    vector<int>::iterator it;

    for(it=v.begin(); it!=v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}

void pVector(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a;

    vector <int>v;
    vector <int>::iterator it;


    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(100);
    v.push_back(120);
    v.push_back(500);
    v.push_back(40);

    pVector(v);
    pVectorIt(v);

    sort(v.begin(),v.end());
    pVector(v);

    reverse(v.begin(),v.end());
    pVector(v);

    v.pop_back();
    pVector(v);

    it=find(v.begin(),v.end(),200001);
    if(it==v.end())
        cout<<"not ";
    else
        cout<<"fou";

    v.clear();
    pVector(v);



    return 0;
}
