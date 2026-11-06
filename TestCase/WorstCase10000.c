#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("worst10000.txt","w");

    if(fp == NULL){
        printf("Unable to open file.\n");
        return 1;
    }

    int n=10000;
    while(n>=1){
        fprintf(fp,"%d\n",n--);
    }
    fclose(fp);
    return 0;
}