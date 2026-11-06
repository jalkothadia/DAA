#include<stdio.h>

int BinarySearch(int arr[],int start,int end , int target){
    if(start>end){
        return -1;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid]>target){
        return BinarySearch(arr,start,mid-1,target);
    }
    else{
        return BinarySearch(arr,mid+1,end,target);
    }

}

void main(){
    int n,start=0;
    printf("Enter size : ");
    scanf("%d",&n);

    int arr[n];

    for(int i = 0;i<n;i++){
        printf("Enter %d element : ",i);
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter the value to find: ");
    scanf("%d",&target);

    int res = BinarySearch(arr,start,n,target);

    if(res == -1){
        printf("Not found");
    }else{
        printf("%d ",res);
    }
}