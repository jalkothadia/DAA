#include<stdio.h>
#include<time.h>

int prime_factor(int n){
    while(n%2 == 0){
        printf("%d ",2);
        n = n/2;
    }
    
    for(int i=3;i*i<=n;i=i+2){
        if(n%i==0){
            printf("%d ",i);
            n =n/i;
        }
    }
    if(n>2){
        printf("%d ",n);
    }
    
}

int main(){
    int start = clock();
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    prime_factor(n);
    int end = clock();
    printf("\n Execution time :- %lf",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}