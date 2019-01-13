#include <iostream>

using namespace std;

int add(int a, int b)
{
    int sum = a+b;


    int i,j,k=0,l;

    for(i=0; i<10; i++)
    {
        k=100+i;
        cout << k << endl;
    }



    return sum;
}

int main()
{
    cout << "Hello world!" << endl;


//    int i,j,k=0,l;
//
//    for(i=0; i<10; i++)
//    {
//        k=100+i;
//        cout << k << endl;
//    }

    int n= add(10,10);

    return 0;
}
