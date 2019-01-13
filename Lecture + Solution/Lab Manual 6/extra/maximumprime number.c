//MAXIMUM&PRIME:
#include<stdio.h>
int main()
{
   int n=1,j,c,max=-9;
   printf ("enter:\n");
  while(n>0)
    {
       scanf ("%d",&n);
       if(n>max)
         {
           max=n;
         }
           {
               j=2;c=0;
              while(j<max)
               {
                 if(max%j==0)
                  {
                     c=c++;
                  }
               j++;
               }
           }
  if(n==0)
    {
      break;
    }
   }
if (c==0)
 {
    printf ("maxi & prime: %d\n",max);
 }
else
 {
    printf ("not prime but maxi: %d\n",max);
 }
    return 0;
}
