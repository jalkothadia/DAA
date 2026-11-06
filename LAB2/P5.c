#include<stdio.h>

void main(){
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);

    int arr[n];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    
}