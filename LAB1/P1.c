#include<stdio.h>
#include<time.h>

long long factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main(){

    int start = clock();
    int number;
    printf("Enter the value of number");
    scanf("%d",&number);

    if(number<0){
        printf("cannot find factorial");
    }else{
        printf("Factorial is %d",factorial(number));
    }
    int end = clock();

    printf("\n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
    return 0 ;
}