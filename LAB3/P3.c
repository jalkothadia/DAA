#include<stdio.h>
#include<time.h>

void sort(int arr[],int size){
    for(int i = 0;i<size;i++){
        for(int j = i+1 ; j<size ;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void main(){
    int start = clock();

    // int n;
    // printf("Enter size : ");
    // scanf("%d",&n);

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

    int n = 100000;
    int arr[n];

    for(int i=0;i<n;i++){
        fscanf(fp,"%d",&arr[i]);
    }

    sort(arr,n);

    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }

    int end = clock();

    printf("\n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
}