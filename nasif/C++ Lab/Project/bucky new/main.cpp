#include <iostream>
#include "yclass.h"
using namespace std;

 /*
class xclass
{
private:
    int a=10,b;
public:
    xclass()
    {
        cout << "this is constructor";
    }
};
*/

int main()
{
    #include<iostream>
using namespace std;
class sample{
    public:
 sample();
 ~sample();
};
sample::sample()
{
   cout<<"message from constructor";
}
sample::~sample()
{
   cout<<"message from distructor";
}


    return 0;
}
