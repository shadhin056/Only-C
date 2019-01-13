#include <stdio.h>
int f_call=0;
int sum(int n){
    f_call=f_call+1;
    if (n<1){
        return  0;
    }
    return n+sum(n-1);
}
int main() {
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    if (n<0){
        printf("undefined\n");
        return 0;
    }
    printf("Sum of %d is %d \n",n,sum(n));
    printf("Number of function calls : %d\n",f_call);
    return 0;
}
