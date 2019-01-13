#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int linear_search(int A[],int n,int x){
    for (int i = 0; i <n ; ++i) {
        if(A[i]==x){
            return i;
        }
    }
    int ii=-1;
    return ii;
}
int main(){
    int a[]={10,20,5,6,9,8,7,5,12,46,85,6};
    printf("%d",linear_search(a,10,8));
}
