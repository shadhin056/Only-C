//pro - d

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
#include<iterator>
#include <sstream>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>

#define pi 3.1415926535
#define Pi acos(-1.0)
#define max 100

using namespace std;
int main()
{
    char a[180],b[85],c[85],x[4]="END";

    int i,j,l,flag,d,e,m,y;

    while(gets(a))
    {
        y=0;
        m=0;
        for(i=0; i<3; i++)
        {
            if(a[i]==x[i])
            {
                m++;
            }
        }
        if(m==3)
        {
            break;
        }
        else if(a[0]!='\"')
        {
            printf("not a quine\n");
        }
        else
        {
            l=0;
            j=0;
            for(i=0; l!=2; i++)
            {
                if(a[i]=='\"')
                {
                    l++;
                }
                else
                {
                    b[j]=a[i];
                    j++;
                }
            }
            b[j]='\n';
            d=j;
            j=0;
            if(a[i]!=' ')
                y=1;
            i++;
            for(i=i; a[i]!=NULL; i++)
            {
                c[j]=a[i];
                j++;

            }
            c[j]=='\n';
            e=j;
            m=0;
            for(i=0; b[i]==c[i] && i<e && i<d; i++)
            {
                m++;
            }
            if(m==d && m==e && y==0)
            {
                printf("Quine(");
                for(i=0; i<d; i++)
                {
                    printf("%c",b[i]);
                }
                printf(")\n");
            }
            else
            {
                printf("not a quine\n");
            }
        }
    }
    return 0;
}
