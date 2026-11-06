#include<stdio.h>

void heapify(int arr[],int n,int i){
    int large = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left<n&& arr[left]>arr[large]){
        large = left;
    }
    if(right<n && arr[right]>arr[large]){
        large = right;
    }
}

void main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element : ",i);
        scanf("%d",&arr[i]);
    }
    heapify(arr,n,0);

    for(int i= n-1; i>1;i--){
        arr[0] = arr[i];
        n--;
        
    }

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}