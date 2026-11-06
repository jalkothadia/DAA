# include<stdio.h>
#include<time.h>

int stack[10];
int top = -1;

void push(int x){
    if(top>10){
        printf("Stack overflow");
    }
    stack[++top] = x;
}

int pop(){
    if(top<0){
        printf("Stack underflow");
    }
    return stack[top--];
}

void peep(){
    if(top<0){
        printf("Invalid");
    }
    printf("%d",stack[top]);
}

void change(int i,int x){
    if(0<i<top){
        stack[i] = x;
    }else{
        printf("not a valid index");
    }
}

void display(){
    while(-1<top){
        printf("%d ",pop());
    }
}

void main(){
    int start = clock();

    int no;
    for(int i=0;i<10;i++){
        printf("Enter number : ");
        scanf("%d",&no);
        push(no);
    }

    int idx,new_no;
    printf("Enter index and new Number : ");
    scanf("%d %d",&idx,&new_no);
    change(idx,new_no);

    display();

    int end = clock();
    printf("\n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
}