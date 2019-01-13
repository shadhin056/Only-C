
#include<stdio.h>
// void abc(int arr[])
//{
//    printf("%d\n",arr[3]);
//}
int abc(int arr[][5])
        {
            printf("%d\n",arr[0][0]);
        }
int main()
{
    int arr[100]={10,2,3,5,6};
    int arrr[10][5]={10,2,3,5,6};
    abc(arr);

}
