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


    char s[85];
    char ns[85];
    char ns2[85];

    while(1)
    {
        gets(s);
        if(strcmp(s,"END")==0)
            break;

        if(s[0]=='"' && strlen(s)>4)
        {
            int i;
            for(i=1; i<strlen(s); i++)
            {
                if(s[i]=='"')
                    break;
                ns[i-1]=s[i];
            }
            ns[i-1]= '\0';

            int k =  0,j;
            for(j=i+2; j<strlen(s); j++)
            {
                ns2[k]=s[j];
                k++;
            }
            ns2[k]= '\0';

            //printf("\n%s\n%s\n",ns,ns2);

            if(strcmp(ns,ns2)==0)
            {
                printf("Quine(%s)\n",ns);
            }
            else
            {
                printf("not a quine\n");
            }

        }
        else
        {
            printf("not a quine\n");
        }


        //printf("%s",s);
    }

    return 0;
}

/*

Sample input


Sample output


*/

