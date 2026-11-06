#include<stdio.h>
#include<time.h>
#include<math.h>

int fac(int n,int m){
    int a;
    int b;
    int counta = 0;
    int countb = 0;
    for(int i=n;i>=n-m;i--){
        if(i%m == 0){
            a = i;
            counta++;
        }
    }
    for(int i=n;i<=m+n;i++){
        if(i%m == 0){
            b = i;
        }
        countb++;
    }
    if(counta == countb){
        return fmax(fabs(a),fabs(b));
    }else if(counta>countb){
        return b;
    }else if(counta<countb){
        return a;
    }
}

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    int m;
    printf("Enter the value of m");
    scanf("%d",&m);

    printf("the value is %d" , fac(n,m));
}