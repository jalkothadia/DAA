#include <stdio.h>
#include <limits.h> 
#include<time.h>

void sort (int arr[], int size) {
    for (int i=0; i<size-1; i++) {
        int flag = 0;
        for (int j=0; j<size-1-i; j++) {
            if (arr[j] >= arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0) break;
    }
}

int main () {
    // int n;
    // printf("Enter the size of array: ");
    // scanf("%d", &n);

    int start = clock();

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
    int arry[n];

    // printf("--- enter the elements --- \n");
    for (int i=0; i<n; i++) {
        fscanf(fp,"%d", &arry[i]);
    }

    sort(arry, n);

    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arry[i]);
    // }

    printf("\n");
    int min = INT_MAX;
    for (int i=0; i<n-1; i++) {
        if (arry[i+1] - arry[i] < min) {
            min = arry[i+1] - arry[i];
        }
    }
    

    printf("min difference = %d ", min);

    int end = clock();

    printf("\n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
}