#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    char  a;
    ch=getchar();

    a=toupper(ch);

    printf("%c",a);
    return 0;
}
