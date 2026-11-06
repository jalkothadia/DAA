#include<stdio.h>

struct node{
    int info;
    struct node *link;
};

struct node* first = NULL;

void insertfirst(struct node *head,int n){
    if(head->link != NULL ){
        head = head->link;
    }
    head->info = n;
}

// void BinarySearch(int arr[],int start,int end,int target){

// }

void main(){
    int n,i=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int n;
        printf("Enter value : ");
        scanf("%d",&n);
        insertfirst(first,n);
    }

    while(first->link != NULL){
        printf("%d",first->info);
        first = first->link;
    }

}