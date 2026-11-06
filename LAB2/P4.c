#include<stdio.h>
#include<time.h>

void main(){
    int start = clock();
    int n;
    printf("Enter the size of array : ");
    scanf("%d" , &n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter %d element : " , i);
        scanf("%d",&arr[i]);
    }

    int positive_arr[n] , negative_arr[n];
    int p = 0, q = 0;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive_arr[p++] = arr[i];
        }else{
            negative_arr[q++] = arr[i];
        }
    }

    int result[n];
    int k = 0 , l=0 , s=0;

    while(l<p && s<n){
        result[k++] = positive_arr[l++];
        result[k++] = negative_arr[s++];
    }
    while(l<p){
        result[k++] = positive_arr[l++];
    }
    while(s<n){
        result[k++] = negative_arr[s++];
    }

    printf("Rearanged arr \n");
    for(int i=0;i<n;i++){
        printf("%d ",result[i]);
    }

    int end = clock();

    printf(" \n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
}