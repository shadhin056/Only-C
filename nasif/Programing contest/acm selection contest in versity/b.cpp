//icpc selction versity
//
//Xplosive
//

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

using namespace std;



vector <int> get_value(long long int b,long long int n)
{
    vector <int> v;

    while(n)
    {
        v.push_back(n%b);
        n/=b;
    }

    return v;
}



int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long int b,n;
    vector <int> v;

    while(cin>>b>>n)
    {

        long long int i,l;

        if(b==1)
        {
            for(i=0; i<n; i++)
            {
                cout << "|";
                //cout << n ;
            }
            cout << endl;
        }
        else
        {
            v= get_value(b,n);
            l= v.size();


            if(b>10)
            {
                for(i=l-1; i>=0; i--)
                {
                    //cout<< v[i];

                    switch (v[i])
                    {
                    case 10:
                        cout << "A";
                        break;
                    case 11:
                        cout << "B";
                        break;
                    case 12:
                        cout << "C";
                        break;
                    case 13:
                        cout << "D";
                        break;
                    case 14:
                        cout << "E";
                        break;
                    case 15:
                        cout << "F";
                        break;
                    default:
                        cout << v[i];

                    }

                }
                cout << endl;
            }
            else
            {
                for(i=l-1; i>=0; i--)
                {
                    cout<< v[i];
                }
                cout << endl;
            }
        }




    }



    return 0;
}

/*

Sample input

2 37
8 37
16 45
9 37

Sample output

*/

