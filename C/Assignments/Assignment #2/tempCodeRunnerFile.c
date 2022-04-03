#include <stdio.h>
void main(){
    int rows;
    scanf("%d",&rows);
    int i,j,k;
    for (i=0;i<rows;i++){
        for(k=0;k<rows - i ;k++)
            printf(" ");
        for(j=0;j<(2*(i+1)-1);j++)
            printf("*");
        printf("\n");
    }
}