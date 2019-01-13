//numeric
//taylor series
//


#include<cstdio>
#include<cmath>
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;

struct Parts
{
    double c;
    double p;
};

Parts mParts[100];


void inEqn(int n)
{
    mParts[0].c= -0.1;
    mParts[0].p= 4;

    mParts[1].c= -0.15;
    mParts[1].p= 3;

    mParts[2].c= -0.5;
    mParts[2].p= 2;

    mParts[3].c= -0.25;
    mParts[3].p= 1;

    mParts[4].c= 1.2;
    mParts[4].p= 0;


////    for(int i=0; i<n; i++)
////    {
////        int c,p;
////        cin >> c >> p;
////
////        mParts[i].c=c;
////        mParts[i].p=p;
////    }


}
void printEqn(int n)
{
    for(int i=0; i<n; i++)
    {
        cout << mParts[i].c << "X" << mParts[i].p << " ";
    }
    cout << endl;

}

double calEqn(int n,double x)
{
    double r=0.0;

    for(int i=0; i<n; i++)
    {
        r+= mParts[i].c * pow(x,mParts[i].p);

    }
    return r;
}

void diff(int n)
{
    for(int i=0; i<n; i++)
    {
//        mParts[i].c *= mParts[i].p;
//        mParts[i].p -= 1;

        mParts[i].c = mParts[i].c * mParts[i].p;
        mParts[i].p = mParts[i].p - 1;

    }

}

long long fac(int n)
{
    if(n==0) return 1;
    return n*fac(n-1);
}


int main()
{


    int n=5;
//    cout << "How many parts in your EQN? ";
//    cin >> n;

    inEqn(n);
    printEqn(n);
    double r;
//    r = calEqn(n,0.5);
//    cout << r << endl


//    diff(n);
//    n--;
//    printEqn(n);

//    diff(n);
//    n--;
//    printEqn(n);


    double xi,xii,h;
    xi=0;
    xii=1;
    //cin >> x>> xii;

    h=xii-xi;

    double vApp, vTrue,eApp,eTrue;
    vTrue = calEqn(n,xii);
    cout << "True Value: " << vTrue << endl;
    int it=1;
    while(1)
    {
        cout << "Iteration " << it << endl;
        cout << "--------------"<<endl;
        if(it==1)
        {
            vApp=calEqn(n,xi);
        }
        else
        {
            diff(n);
            n--;
            vApp = (vApp+calEqn(n,xi)*pow(h,it))/fac(it-1);
        }

        eTrue = abs(vTrue-vApp)/vTrue*100;
        cout << vApp << "\t\t" << eTrue << endl;

        it++;
        if(it>5)break;
    }




    return 0;
}

