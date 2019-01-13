//syntax
//syntax - macro.
//Xplosive
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
#define MAX 25


struct student
{
    int id;
    char name[50];
    double point_s1;
    double point_s2;
    double point_s3;
    double point_s4;
    double point_s5;
    double point_s6;
    double point_s7;
    double point_s8;
    double point_s9;
    double point_s10;
    double cgpa;

}st[MAX];

int compare(student a, student b)
{
    if(a.cgpa==b.cgpa)
    {
        if(a.id==b.id)
        {

        }else return a.id<b.id;
    }
    else return a.cgpa>b.cgpa;
}

double get_cgpa(int i)
{
    double total_point = st[i].point_s1+st[i].point_s2+st[i].point_s3+st[i].point_s4+st[i].point_s5+st[i].point_s6+st[i].point_s7+st[i].point_s8+st[i].point_s9+st[i].point_s10;

    return total_point/10.0;
}

int main()
{
    READ("std-dat.txt");
    //WRITE("st-sort.txt");

    int i,j,k;
    int id;

    double cgpa;
    for(i=0; i<20; i++ )
    {

        scanf("%d",&st[i].id); //cout << &st[i].id << endl;
        scanf("%s",&st[i].name); //cout << &st[i].name << endl;
        scanf("%lf%lf%lf%lf%lf",&st[i].point_s1,&st[i].point_s2,&st[i].point_s3,&st[i].point_s4,&st[i].point_s5);
        scanf("%lf%lf%lf%lf%lf",&st[i].point_s6,&st[i].point_s7,&st[i].point_s8,&st[i].point_s9,&st[i].point_s10);
    }

//    for(i=0; i<20; i++ )
//    {
//        printf("%d\n",st[i].id);
//        printf("%s\n",st[i].name);
//        printf("%.1lf %.1lf %.1lf %.1lf %.1lf",st[i].point_s1,st[i].point_s2,st[i].point_s3,st[i].point_s4,st[i].point_s5);
//        printf("%.1lf %.1lf %.1lf %.1lf %.1lf\n",st[i].point_s6,st[i].point_s7,st[i].point_s8,st[i].point_s9,st[i].point_s10);
//        printf("\n\n");
//    }


    for(i=0; i<20; i++ )
    {
        st[i].cgpa=get_cgpa(i);
    }


//    for(i=0; i<20; i++ )
//    {
//        printf("ID  : %d\n",st[i].id);
//        printf("Name: %s\n",st[i].name);
//        printf("GPA : %.1lf %.1lf %.1lf %.1lf %.1lf ",st[i].point_s1,st[i].point_s2,st[i].point_s3,st[i].point_s4,st[i].point_s5);
//        printf("%.1lf %.1lf %.1lf %.1lf %.1lf\n",st[i].point_s6,st[i].point_s7,st[i].point_s8,st[i].point_s9,st[i].point_s10);
//        printf("CGPA: %.2lf \n\n",st[i].cgpa);
//    }


    sort(st,st+20,compare);

    for(i=0; i<20; i++ )
    {
        printf("ID  : %d\n",st[i].id);
        printf("Name: %s\n",st[i].name);
        printf("GPA : %.1lf %.1lf %.1lf %.1lf %.1lf ",st[i].point_s1,st[i].point_s2,st[i].point_s3,st[i].point_s4,st[i].point_s5);
        printf("%.1lf %.1lf %.1lf %.1lf %.1lf\n",st[i].point_s6,st[i].point_s7,st[i].point_s8,st[i].point_s9,st[i].point_s10);
        printf("CGPA: %.2lf \n\n",st[i].cgpa);
    }











    return 0;
}




/*

Sample Input



Sample Output



*/
