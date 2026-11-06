#include<stdio.h>
#include<time.h>

int no_power(int a,int b){
    if(b==0){
        return 1;
    }else if(b>0){
        return a * no_power(a,b-1);
    }else{
        return 1/no_power(a,-b);
    }
}

int main(){
    int start = clock();
    int no;
    printf("Enter number : ");
    scanf("%d",&no);
    int exp;
    printf("Enter exponent : ");
    scanf("%d",&exp);

    printf("Power is : %d",no_power(no,exp));
    int end = clock();

    printf("\n Execution time is : %lf",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}