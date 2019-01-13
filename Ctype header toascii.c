#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    ch=getchar();
    int a;
    a=toascii(ch);
    printf("%d",a);
    return 0;
}
