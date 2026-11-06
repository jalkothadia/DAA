#include<stdio.h>

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int arr[n/2],j=0;

    for(int i=1;i<=n/2;i++){
        arr[j++] = i; 
    }

    int f=0,r=1;
    
    // for(int i=0;i<n/2;i++){
    //     printf("%d " , arr[i]);
    // }
    
    int sum = 0;
    for(int i=f;i<r;i++){
        sum += arr[i];
        if(sum<n){
            r++;
        }
        if(sum>n){
            f++;
        }
        if(sum==n){
            printf("True");
            break;
        }
    }
    if(sum!=n){
        printf("False");
    }
}