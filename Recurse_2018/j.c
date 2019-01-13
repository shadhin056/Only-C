#include <stdio.h>
int re(int n,char a[]){
    printf("%c",a[n]);
    if (n<1){
        return  0;
    }
    re(n-1,a);
}
int main() {
    char a[120];
    printf("Enter any string = ");
    scanf("%s",&a);
    int size = strlen(a);
    re(size-1,a);
    return 0;
}
