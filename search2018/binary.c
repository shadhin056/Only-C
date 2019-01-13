
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Binary_search(int A[],int n,int x){
    int left,right,mid;
    left=0;
    right=n-1;
    while (left<=right){
     mid=(left+right)/2;
        if(A[mid]==x){
            return mid;
        }
        if(A[mid]<x){
            left=mid+1;
        } else{
            right=mid-1;
        }

    }
    return -1;
}

int main(){
    int a[]={10,20,25,26,29,38,47,55,112,146,185,226};

    printf("%d",Binary_search(a,12,25));
}
