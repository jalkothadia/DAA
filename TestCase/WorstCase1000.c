#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("worst1000.txt","w");

    if(fp == NULL){
        printf("Unable to open file.\n");
        return 1;
    }

    int n=1000;
    while(n>=1){
        fprintf(fp,"%d\n",n--);
    }
    fclose(fp);
    return 0;
}