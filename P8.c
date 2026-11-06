#include<stdio.h>

void swap_zeros(int arr[],int n){
    int a=0;
    int b=0;

    while(b!=n-1){
        if(arr[a]>0){
            a++;
            b++;
        }
        if(arr[a]==0){
            while(b!=n-1 && arr[b]==0){
                b++;
            }
            if(arr[b]>0){
                arr[a] = arr[b];
                arr[b] = 0;
            }
        }
    }
}

void main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("enter %d element : ",i);
        scanf("%d",&arr[i]);
    }
    //  printf("HIII");
    swap_zeros(arr,n);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}