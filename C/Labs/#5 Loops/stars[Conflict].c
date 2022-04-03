#include <stdio.h>
int main(){
    int i,j,k,rows;
    printf("enter number of rows :\n");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i;j++)
            printf(" ");
        for(k=0;k<2*(i+1)-1;k++)
            printf("%d",i);
        printf("\n");
    }   
    return 0;
}