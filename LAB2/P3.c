#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node{
    int data;
    struct node * link;
};

struct node*head = NULL;
void insert(){
    struct node* temp = head;
    struct node* new = (struct node*)malloc(sizeof(struct node));

    if(head == NULL){
        head = new;
        return;
    }

    while(temp->link != NULL){
        temp = temp->link;
    }
    
    printf("Enter the value : ");
    scanf("%d",&new->data);
    temp->link = new;
    new->link = NULL;
};

void delete(){
    struct node* temp = head;
    head = head->link;
    printf("%d \n",temp->data);
    free(temp);
}

int traverse(struct node* head){
    struct node * temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->link;
    }
}

void main(){

    int start = clock();

    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter value at first pos : ");
    scanf("%d",&head->data);
    head->link = NULL;

    for(int i=1;i<=10;i++){
        insert();
    }

    delete();

    traverse(head);

    int end = clock();

    printf(" \n Execution time : %lf",(double)(end-start)/CLOCKS_PER_SEC);
}