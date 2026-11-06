#include<stdio.h>
#include<time.h>

void sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int flag = 0;
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag) break;
    }
}

int main(){

    int start = clock();

    // int n;
    // printf("Enter size of array : ");
    // scanf("%d",&n);

    // int arr[n];

    FILE* fp;
    // fp = fopen("D:\\DAA\\best1000.txt","r");
    // fp = fopen("D:\\DAA\\best10000.txt","r");
    // fp = fopen("D:\\DAA\\best100000.txt","r");
    // fp = fopen("D:\\DAA\\Avg1000.txt","r");
    // fp = fopen("D:\\DAA\\Avg10000.txt","r");
    // fp = fopen("D:\\DAA\\Avg100000.txt","r");
    // fp = fopen("D:\\DAA\\worst1000.txt","r");
    // fp = fopen("D:\\DAA\\worst10000.txt","r");
    fp = fopen("D:\\DAA\\worst100000.txt","r");


    if(fp == NULL){
        printf("Unable to open");
        return 1;
    }

    int n=100000;
    int arr[n];

    for(int i=0;i<n;i++){
        fscanf(fp,"%d",&arr[i]);
    }

    sort(arr,n);

    int min_diff = arr[1] - arr[0];

    for(int i=1;i<n-1;i++){
        if(min_diff > (arr[i+1]-arr[i])){
            min_diff = arr[i+1] - arr[i];
        }
    }

    printf("Min difference is %d" , min_diff);

    int end = clock();
    fclose(fp);

    printf("\n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}