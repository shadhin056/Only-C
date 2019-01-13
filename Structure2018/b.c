#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int **ara,num[12];
    int i,j,total_classes,n;
    printf("Enter the total number of classes : ");
    scanf("%d",&total_classes);
    ara=(int**)malloc(sizeof(int *)*total_classes);
    if(ara==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i <total_classes ; ++i) {
        printf("Enter the number of students for class %d : ",i+1);
        scanf("%d",&n);
        num[i]=n;
        ara[i]=(int*)malloc(sizeof(int)*n);
        if(ara[i]==NULL){
            printf("Memory allocation failed\n");
            return 1;
        }
        for (int j = 0; j <n ; ++j) {
            printf("enter the marks of student %d",j+1);
            scanf("%d",&ara[i][j]);

        }
    }
    printf("Output\n");
    for (int k = 0; k < total_classes; ++k) {
        printf("class %d ",k+1);
        for (int l = 0; l <num[k] ; ++l) {
            printf("%d",ara[k][l]);
        }

    }

}
