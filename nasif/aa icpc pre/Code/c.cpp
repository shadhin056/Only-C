//icpc prelemenary 2014
//prob - a
//fine

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <fstream>
#include <numeric>
#include <iterator>
#include <bitset>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iomanip>
//#include <conio.h>    //this will give u compile error in contest

using namespace std;

//file must
#define READ(file) freopen(file, "r", stdin)
#define WRITE(file) freopen(file, "w", stdout)

//constant must
#define PI acos(-1.0)
#define pi 2*acos(0.0)
#define INF   1<<30      //infinity value
#define EPS   1e-9

//type must
#define ll long long
#define ull unsigned long long

//for stl must
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
#define all(v) v.begin(),v.end()



//debug
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define dbg(a) cout << #a << " -> " << a << endl;
#define dbgarr(a,start,end) for(int i=start;i<=end;i++) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define dbgvec(a,start,end) for(int i=start;i<=end;i++) cout<<#a<<"["<<i<<"] -> "<<a[i]<<" "<<endl;
#define parr(a) for(int i=0;i<arrl(a);i++) cout<<a[i]<<" "; cout << endl;
#define pvec(a) for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout << endl;
#define pmat(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<mat[i][j]<<" ";cout<<endl;}


//usefull function
#define mem(a,n) memset(a,n,sizeof(a))
#define arrl(a) sizeof(a)/sizeof(*(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))


//variable
#define MAX 100
#define MAX_I 100
#define MAX_J 100


//int func()



int main()
{
    //READ("input.txt");
    //WRITE("output.txt");

    int t, tt;
    cin >> tt;

    vi co;
    vi ac;
    vi ho;
    vi an;

    for(t=1; t<=tt; t++)
    {
        //if(t!=1) cout << endl;
        //cout << "Case #" << t << ":" << endl;
        printf("Case %d: ",t);
        //cout << endl;

        int tTime,tMovie;

        scanf("%d%d",&tTime,&tMovie);

        string movie, type;
        int tim;
        for(int i=0; i<tMovie; i++)
        {
            //scanf("%s%s%d",&movie,&type,&tim);
            cin>>movie>> type;
            cin>> tim;

            if(type=="Comedy")
            {
                co.push_back(tim);
            }
            else if(type=="Action")
            {
                ac.push_back(tim);
            }
            else if(type=="Animation")
            {
                an.push_back(tim);
            }
            else if(type=="Horror")
            {
                ho.push_back(tim);
            }

        }
        sort(all(co));
        sort(all(ac));
        sort(all(an));
        sort(all(ho));

//        pvec(co);
//        pvec(ac);
//        pvec(an);
//        pvec(ho);

        vi sss;


        int sum;
        bool flag=false;
        for(int i=0; i<co.size(); i++)
        {
            for(int j=0; j<ac.size(); j++)
            {
                for(int k=0; k<an.size(); k++)
                {
                    for(int l=0; l<ho.size(); l++)
                    {
                        sum=co[i]+ac[j]+an[k]+ho[l];

                        if(sum<=tTime)
                        {
                            //printf("%d\n",sum);
                            sss.push_back(sum);

                            //flag=true;

                            //break;
                        }
//                        if(flag)
//                            break;
                    }
//                    if(flag)
//                        break;
                }
//                if(flag)
//                    break;
            }
//            if(flag)
//                break;
        }


        sort(all(sss));
        //pvec(sss);
        //reverse(all(sss))

        if(sss.empty())
        {
            printf("Movie show canceled!\n");
        }
        else
        {
            printf("%d\n",sss[sss.size()-1]);

        }


        ac.clear();
        an.clear();
        ho.clear();
        co.clear();
        sss.clear();



    }



    return 0;
}




/*

Sample Input

3
610
10
Most_Welcome Comedy 240
Most_Welcome_2 Comedy 180
Mission_Impossible Action 100
Frozen Animation 120
Ice_Age Animation 100
Mama Horror 200
I_Dont_Care Comedy 200
Jhole_Mon_Gacher_Dale Action 110
Dhil_Mari_Tor_Tiner_Chale Action 210
Amti_Ami_Khabo_Pere Animation 240
560
10
Most_Welcome Comedy 240
Most_Welcome_2 Comedy 180
Mission_Impossible Action 100
Frozen Animation 120
Ice_Age Animation 100
Mama Horror 200
I_Dont_Care Comedy 200
Jhole_Mon_Gacher_Dale Action 110
Dhil_Mari_Tor_Tiner_Chale Action 210
Amti_Ami_Khabo_Pere Animation 240
580
10
Most_Welcome Comedy 240
Most_Welcome_2 Comedy 180
Mission_Impossible Action 100
Frozen Animation 120
Ice_Age Animation 100
Mama Horror 200
I_Dont_Care Comedy 200
Jhole_Mon_Gacher_Dale Action 110
Dhil_Mari_Tor_Tiner_Chale Action 210
Amti_Ami_Khabo_Pere Animation 240

Sample Output

Case 1: 610 Case 2: Movie show canceled! Case 3: 580

*/

