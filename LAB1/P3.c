#include<stdio.h>
#include<time.h>

int digits(int n){
    if(n == 0){
        return 0;
    }else{
        return 1 + digits(n/10);
    }
}

void main(){
    int start = clock();
    int n;
    printf("Enter n :");
    scanf("%d",&n);

    printf("the digits are %d",digits(n));
    int end = clock();
    printf("\n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
}