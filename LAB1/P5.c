#include<stdio.h>
#include<time.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int start = clock();
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    printf("%d",fibonacci(n));
    int end = clock();
    printf("\n Execution time is : %lf",(double)(end-start)/CLOCKS_PER_SEC);
}