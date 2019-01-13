//sorting
//sort - merge sort
//xplo
//not this
//there are more shorting algo

#include<cstdio>
#include<iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>

#define MAX 10

using namespace std;

void printArray(int*, int);
void sortAscending(int*, int);
void sortDescending(int*, int);
void deleteFromAPosition(int*, int, int);
void shiftToRightFromAPosition(int*, int, int);


int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //int a[MAX];
    int a[MAX]= {2,9,8,7,3,5,4,8,6,1};
    int l=MAX;

//    cout << "Enter total number of input: ";
//    cin>>l;
//
//    for(int i=0; i<l; i++)
//    {
//        cin >> a[i];
//    }

    cout << "main    : ";
    printArray(a,l);

    sortAscending(a,l);
    cout << "Final Ascending Array" << endl;
    printArray(a,l);

    sortDescending(a,l);
    cout << "Final Descending Array" << endl;
    printArray(a,l);


    return 0;

}


void sortAscending(int* a, int l)
{
    //way left to right
    int key;
    for(int i=0; i<l-1; i++)
    {
        if(a[i+1]<a[i])
        {
            key = a[i+1];

            deleteFromAPosition(a,l,i+1);
            //printArray(a,l);

            for(int j=0; j<l; j++)
            {
                if(a[j]>=key)
                {
                    shiftToRightFromAPosition(a,l,j);
//                    cout << "after shift: ";
//                    printArray(a,l);
                    a[j]=key;
                    break;

                }
            }

//            cout << "testing : ";
//            printArray(a,l);

        }

//        cout << "testing : ";
//        printArray(a,l);

    }




}
void sortDescending(int* a, int l)
{
    //way left to right
    int key;
    for(int i=0; i<l-1; i++)
    {
        if(a[i+1]>a[i])
        {
            key = a[i+1];

            deleteFromAPosition(a,l,i+1);
            //printArray(a,l);

            for(int j=0; j<l; j++)
            {
                if(key>=a[j])
                {
                    shiftToRightFromAPosition(a,l,j);
//                    cout << "after shift: ";
//                    printArray(a,l);
                    a[j]=key;
                    break;

                }
            }

//            cout << "testing : ";
//            printArray(a,l);

        }

//        cout << "testing : ";
//        printArray(a,l);

    }

}

void deleteFromAPosition(int* a, int l, int pos)
{
    for(int i=pos; i<l-1; i++)
    {
        a[i]= a[i+1];
    }

}

void shiftToRightFromAPosition(int* a, int l, int pos)
{
    for(int i=l-1; i>pos; i--)
    {
        a[i]= a[i-1];
    }
}


void printArray(int* a, int l)
{
    for(int i=0; i<l; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

