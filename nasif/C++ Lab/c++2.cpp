

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

struct Man
{
    int income;
    int height;
};

bool comp(Man a,Man b)
{
    if(a.income==b.income)
    {
        if(a.height==b.height)
        {

        }
        else
        {
            return a.height<b.height;
        }
    }
    else
    {
        return a.income>b.income;
    }
}

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
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void pVector(vector<Man>v)
{
    Man mMan;
    for(int i=0; i<v.size(); i++)
    {
        mMan=v[i];
        cout<<mMan.height<<" "<<mMan.income<<endl;
    }
    cout<<endl;
}

int main()
{
    int a;
    Man mMan;
    mMan.height=10;
    mMan.income=100;

    vector <Man>v;
    vector <Man>::iterator it;

    v.push_back(mMan);
    mMan.height=5;
    mMan.income=10;
    v.push_back(mMan);

    mMan.height=20;
    mMan.income=1000;
    v.push_back(mMan);
    mMan.height=60;
    mMan.income=1000;
    v.push_back(mMan);

    pVector(v);

    sort(v.begin(),v.end(),comp);
    pVector(v);

    return 0;
}
