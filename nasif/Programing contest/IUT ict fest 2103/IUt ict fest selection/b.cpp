//b-evil number

#include <cstdio>
#include <iostream>
//#include <algorithm>

using namespace std;


int is_evil(long long int n);


int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    long long int t,tt;
    scanf("%lld",&tt);

    long long int n;

    for(t=1; t<=tt; t++)
    {
        scanf("%lld",&n);

        if(is_evil(n))
        {
            printf("Case %lld: %lld is an Evil number.\n",t,n);
        }
        else
        {
            printf("Case %lld: %lld is an Odious number.\n",t,n);
        }

    }

    return 0;
}

int is_evil(long long int n)
{
    long long int c=0;
    while(n)
    {
        if(n%2==1)
        {
            c++;
        }
        n/=2;
    }

    if(c%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

/*

3
3
4
5


*/
