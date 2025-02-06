#include<stdio.h>

void swap(int *xp,int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[],int n)
{
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                swap(&arr[j],&arr[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[10];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
        if(i < n -1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
