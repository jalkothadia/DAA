#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("Avg10000.txt","w");

    if(fp==NULL){
        printf("Unable to open file.\n");
        return 1;
    }

    int n=1;
    while(n<=10000){
        fprintf(fp,"%d\n",rand() % 10000);
        n++;
    }
    return 0;
}