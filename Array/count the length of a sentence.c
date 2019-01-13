//HOW MANY LETTER ARRY
#include<stdio.h>
int main()
{
    char a[100];
    int i,c=0;
    gets(a);
   //scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       c=c++;
   }
    printf("%d",c);
    return 0;
}
