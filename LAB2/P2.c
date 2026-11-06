#include<stdio.h>
#include<time.h>
#define n 5

int f=0 , r=0;

void insert(int que[]){
    int a;
    printf("Enter value : ");
    scanf("%d",&a);
    if(r<5){
        que[r++] = a;
    }
};

void delete(int que[]){
    if(f<r){
        int b = que[f++];
        printf("%d",b);
    }else{
        printf("No elements");
    }
};

void display(int que[]){
    while(f!=r){
        printf("%d ",que[f++]);
    }
}

void main(){
    int start = clock();

    int que[n];

    for(int i=0;i<5;i++){
        insert(que);
    }

    // display(que);

    delete(que);

    int end = clock();

    printf("\n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
}