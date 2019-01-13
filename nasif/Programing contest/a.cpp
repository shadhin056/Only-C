//icpc selction versity
//
//Xplosive
//

#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
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

#define pi 3.1415926535

using namespace std;

unsigned long long int a[100];
void store_fibo (int n)
{
    a[0]=0,a[1]=1;
    for(int i=2; i<=n; i++)
        a[i]= a[i-1]+a[i-2];
}

//get func from store
unsigned long long int get_fibo_store(long long int n)
{
    return a[n];
}


int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;

    store_fibo(21);

    //cout << get_fibo_store(20) << endl;
    while(scanf("%d",&n)==1)
    {


        if(n==-1)
        {
            break;
        }

        int total_ele = 0;

        total_ele = 2*((n-1) + get_fibo_store(n));
        //cout << total_ele << endl;

        for(int i = 0; i<= n-1; i++)
        {
            int printed=0;

            for(int j = 0; j<i; j++)
            {
                cout << ".";
                //cout << ".";

                printed++;
            }

            int f = get_fibo_store(i+1);
            for(int j = 0; j<f; j++)
            {
                cout << "#" ;
                //cout << "#" ;
                printed++;
            }

            for(int k =0; k < total_ele/2-printed; k++)
            {
                cout << "..";
            }

            for(int j = 0; j<f; j++)
            {
                cout << "#" ;
                //cout << "#" ;
                //printed++;
            }

            for(int j = 0; j<i; j++)
            {
                cout << ".";
                //cout << ".";

                //printed++;
            }

            cout << endl;

            //----------------------------------

            for(int j = 0; j<i; j++)
            {
                cout << ".";
                //cout << ".";
            }


            for(int j = 0; j<f; j++)
            {
                cout << "#" ;
                //cout << "#" ;
            }

            for(int k =0; k < total_ele/2-printed; k++)
            {
                cout << "..";
            }
            for(int j = 0; j<f; j++)
            {
                cout << "#" ;
                //cout << "#" ;
                //printed++;
            }

            for(int j = 0; j<i; j++)
            {
                cout << ".";
                //cout << ".";

                //printed++;
            }

            cout << endl;

        }

        cout << endl;

    }

    return 0;
}

/*

Sample input



Sample output


*/
