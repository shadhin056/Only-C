//show capital letters in small & small in capital
#include<stdio.h>
int main()
{
    char a[100];
    int i,c=0;
     gets(a);
    //scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
      if(a[i]>=65&&a[i]<=90)
      {
          a[i]=a[i]+32;
      }
      else
      {
          a[i]=a[i]-32;
      }
   }
    printf("%s",a);
    return 0;
}
