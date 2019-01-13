//approximation, truncation and round of error
//te - ex,e-x,e-x(inverse)
//check e-x inverse

#include<cstdio>
#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

long long fac(int n)
{
    if(n==0) return 1;
    return n*fac(n-1);
}


int main()
{
    double x=1.2;
    //cin >> x;

    double vApp, vPre=0,vCurr,vTrue, eApp,eTrue,es=0.1;
    //vTrue = exp(1.2);
    vTrue = exp(-1.2);

    int it=1,maxIt=10,p=4;
    int w=12;
    string bar = "-------------------------------------";

//    cout << "Enter Es: ";
//    cin >> es;

//    cout << "Enter Max Term: ";
//    cin >> maxIt;


    cout << "True Value: " << vTrue << " Es: " << es << " Max Term: " << maxIt << endl << endl;

    cout << left << setw(5) << "Term" << setw(w) << "AppValue" << setw(w) << "Ea" << setw(w) << "Et" << endl;
    cout << bar << endl;


    while(it<=maxIt)
    {
        if(it==1)
        {
            vApp = 1;
            eApp = 100;
            eTrue = 100;
        }
        else
        {
            vPre = vApp;
            //vCurr = vApp+x;
            //vApp=vApp+(pow(x,it-1))/fac(it-1);  //ex
            //vApp=vApp+pow(-1,it-1)*(pow(x,it-1))/fac(it-1);  //e-x
            vApp=1/(vApp+(pow(x,it-1))/fac(it-1));  //e-x inverse

            eApp=abs((vApp-vPre)/vApp)*100;
            eTrue=abs((vTrue-vApp)/vTrue)*100;
        }

        //cout << vApp << "\t" << eApp << "\t" << eTrue << endl;
        cout << left << setw(5) << it << setw(w) << vApp << setw(w) << eApp << setw(w) << eTrue << endl;
        cout << bar << endl;

        if(eTrue<es) break;
        //if(eApp<es) break;

        it++;

    }




    return 0;
}

