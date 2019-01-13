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

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    char s[185],s2[90],s3[90];

    int i,j,k,l;

    int d,e,m,y;
    char x[4]="END";

    while(gets(s))
    {
        y=0;
        m=0;
        for(i=0; i<3; i++)
        {
            if(s[i]==x[i])
            {
                m++;
            }
        }
        if(m==3)
        {
            break;
        }
        else if(s[0]!='\"')
        {
            printf("not a quine\n");
        }
        else
        {
            l=0;
            j=0;
            for(i=0; l!=2; i++)
            {
                if(s[i]=='\"')
                {
                    l++;
                }
                else
                {
                    s2[j]=s[i];
                    j++;
                }
            }
            s2[j]='\n';
            d=j;
            j=0;
            if(s[i]!=' ')
                y=1;
            i++;
            for(i=i; s[i]!=NULL; i++)
            {
                s3[j]=s[i];
                j++;

            }
            s3[j]=='\n';
            e=j;
            m=0;
            for(i=0; s2[i]==s3[i] && i<e && i<d; i++)
            {
                m++;
            }
            if(m==d && m==e && y==0)
            {
                printf("Quine(");
                for(i=0; i<d; i++)
                {
                    printf("%c",s2[i]);
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

/*

Sample input


Sample output


*/

