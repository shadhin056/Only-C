//f-

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int score(string s);

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t,tt=1;

    scanf("%d",&tt);
    int i,j,k,l,ind;

    string n[105],f[105];

    for(t=1; t<=tt; t++)
    {
        int sc[105]={0};
        int tsc[105]={0};
        int a, b;
        scanf("%d%d",&a,&b);

        for(i=0; i<a; i++)
        {
            //scanf("%s%s",&n,&f);

            cin >> n[i] >> f[i];
            sc[i]=score(f[i]);
        }



//        for(i=0; i<a; i++)
//        {
//            cout << n[i] << " " << f[i] << endl;
//            cout << sc[i] << endl;
//        }

        for(i=0; i<105; i++)
        {
            tsc[i]=sc[i];
        }

        sort(tsc,tsc+105);

        int max= tsc[104];


        for(i=0; i<a; i++)
        {
            if(sc[i]==max)
            {
                ind=i;
                break;
            }
        }
        cout << "Case " << t << ": " << n[ind] << " " << "will be select for this job." << endl;




    }


    return 0;
}


int score(string s)
{
    int l=s.size();

    //char ss[105];

    int c=0,i;

    for(i=0; i<l ; i++)
    {
        if(s[i]== '*')
        {
            c++;
        }
    }

    return c;
}



/*

3
3 3
ajman ***
asif ...
shadat ...
3 3
ajman ...
asif ***
shadat ...
3 3
ajman ...
asif ...
shadat ***

*/
