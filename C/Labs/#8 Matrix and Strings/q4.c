#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100000
#define NUM 20
void main(){
    char a[MAX];
    char b[NUM][MAX];
    gets(a);
    char *token;
    token = strtok(a," ");
    int i = 0;
    while(token != NULL){  
        strcpy(b[i],token);
        token= strtok(NULL," ");
        i++;
    }
    for(i;i>=0;i--)
        printf("%s ",b[i]);
}