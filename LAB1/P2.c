#include<stdio.h>
#include<time.h>

int sums(int n){
    if(n==1){
        return 1;
    }else{
        return n + sums(n-1);
    }
}

int main(){
    
    int start = clock();
    int n;
    int total;
    printf("Enter the value of n :");
    scanf("%d",&n);
    total = sums(n);
    printf("%d" , total);
    int end = clock();
    printf(" \n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}