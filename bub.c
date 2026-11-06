#include<stdio.h>
#include<time.h>

void main(){

    clock_t start, end;

    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    for(int i = 0;i<n;i++){
        printf("Enter %d element",i);
        scanf("%d",&arr[i]);
    }

    start = clock();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    end = clock();

    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }

    double time = ((double)(end-start))/CLOCKS_PER_SEC;

    printf("%f",time);

}