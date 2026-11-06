#include<stdio.h>

int BinarySearch(int arr[],int start,int end , int target){
    while (start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] > target){
            end = mid - 1;
        }
        else start = mid + 1;
    }
    return -1;
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

    int res = BinarySearch(arr,0,n,target);
    printf("Ans is = %d",arr[res]);
}