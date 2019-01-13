//recursion
//tower of hanoy
//working fine
//Nasif Ahmed

#include<cstdio>
#include<iostream>
#include <cstdlib>
#define MAX 100

using namespace std;


int i=1;
void hanoi(int n, char a, char b, char c)
{
    if (n > 0)
    {
        hanoi(n-1, a, c, b);
        cout << a << "->" << c << endl;
        i++;
        hanoi(n-1, b, a, c);
    }
}
main()
{
    int n;
    cout << "Enter total number of disks : ";
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
}
