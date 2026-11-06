#include<stdio.h>
#include<time.h>

void sort(int arr[][2], int size){
    for(int i=0;i<size-1;i++){
        int flag = 0;
        for(int j=0;j<size-i-1;j++){
            if(arr[j][0]>arr[j+1][0]){
                int temp1 = arr[j][0];
                int temp2 = arr[j][1];
                arr[j][0] = arr[j+1][0];
                arr[j][1] = arr[j+1][1];
                arr[j+1][0] = temp1;
                arr[j+1][1] = temp2;
                flag = 1;
            }
        }
        if(flag) break;
    }
}

void main(){

    int start = clock();

    // int n;
    // printf("Enter the number of meetings : ");
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
    int arr[n][2];

    for(int i=0;i<n;i++){
            
            fscanf(fp,"%d %d",&arr[i][0],&arr[i][1]);
    }

    sort(arr,n);
    // for(int i=0;i<n;i++){
    //         printf("%d %d",arr[i][0],arr[i][1]);
    //         printf("\n");
    // }

    int flag = 1;
    for(int i=0;i<n;i++){
        if(arr[i][1]>arr[i+1][0]){
            flag = 0;
        }
    }
    if(flag == 1){
        printf("True");
    }else{
        printf("False");
    }

    int end = clock();

    printf("\n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
}