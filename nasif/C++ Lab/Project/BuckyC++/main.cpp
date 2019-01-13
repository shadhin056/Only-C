#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "xplo.h"
#include "xplohead.h"
using namespace std;



int main()
{

    xplo ob1,ob2;

    ob1.write_a(10);
    ob2.write_a(20);


    cout << ob1.read_a() << endl;
    //cout << ob2.read_a() << endl;



    return 0;
}

