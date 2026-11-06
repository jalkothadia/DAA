#include<stdio.h>

void quick_sort(int arr[],int n){
    int pivot = arr[0];
    int end = n;
    int start = 0;
    while(start < end){
        while(start < end && arr[start]>pivot){
            start++;
        }
        while(arr[end] > pivot){
            end--;
        }
        if(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    
}

void main(){
    int n;
    printf("Enter size of n");
    scanf("%d",&n);

    int arr[n];

    for(int i =0 ;i<n;i++){
        printf("Enter %d element : ",i);
        scanf("%d",&arr[i]);
    }

    quick_sort(arr,n);
    
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}