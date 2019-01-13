//taylor series
//ts - general eqn
//fine

#include<cstdio>
#include<cmath>
#include<iostream>
#include<iomanip>

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

    double xi,xii,h;
    xi=0;
    xii=1;
    //cin >> x >> xii;

    h=xii-xi;

    double vApp, vTrue,eApp,eTrue,es=0.1;
    vTrue = calEqn(n,xii);

    int it=0,maxIt=n,p=4;
    int w=12;
    string bar = "-------------------------------------";

//    cout << "Enter Es: ";
//    cin >> es;

    cout << "True Value: " << vTrue << " Es: " << es << endl << endl;

    cout << left << setw(10) << "Iteration" << setw(w) << "AppValue" << setw(w) << "Ea" << setw(w) << "Et" << endl;
    cout << bar << endl;

    while(it<maxIt)
    {

        if(it==0)
        {
            vApp=calEqn(n,xi);
        }
        else
        {
            diff(n);
            n--;
            vApp = vApp+(calEqn(n,xi)*pow(h,it))/fac(it);
            //cout << calEqn(n,xi) << endl;
        }

        eTrue = abs(vTrue-vApp)/vTrue*100;
        //cout << vApp << "\t\t" << eTrue << endl;

        eApp=0.0;
        cout << left << setw(10) << it << setw(w) << vApp << setw(w) << eApp << setw(w) << eTrue << endl;
        cout << bar << endl;

        if(eTrue<es) break;
        //if(eApp<es) break;

        it++;

    }




    return 0;
}

