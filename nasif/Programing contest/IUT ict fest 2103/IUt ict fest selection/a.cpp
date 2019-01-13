//a- change me

#include <cstdio>
#include <iostream>
//#include <algorithm>
#include <cstring>
//#include <cctype>


using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t,tt;
    char gr;

    scanf("%d",&tt);
    gr=getchar();

    int i,j,k,l;
    char s[105],r[105];

    for(t=1; t<=tt; t++)
    {
        gets(s);

        l=strlen(s);

        j=0;
        for(i=0; i<l; i++)
        {
            if( isalpha(s[i]) )
            {
                if(islower(s[i]))
                {
                    r[j++]= s[i]-32;
                }
                else
                {
                    r[j++]= s[i]+32;
                }


            }


        }
        r[j]= '\0';

        printf("String %d: %s\n",t,r);

    }


    return 0;
}
/*

3
a12B
abc 123 DEF 'bDc?*
thisStringStartedWithSpace!!!


*/
