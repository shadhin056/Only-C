#include <stdio.h>
void recurse(int count)
{
    if(count==5)
    {
        return;
    }
    printf("i am learning recursion %d.\n",count);
    recurse(count+1);
    printf("i am learning recursion %d.\n",count);
}
int main()
{
    recurse(1);
    return 0;
}
