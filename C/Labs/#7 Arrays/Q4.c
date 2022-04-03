#include <stdio.h>
#define SIZE 5
void fillArrays(int x[],int y[]);
void arraySum(int x[],int y[],int z[]);

int main(){
    int x[SIZE],y[SIZE],z[SIZE];
    fillArrays(x,y);
    arraySum(x,y,z);
    for(int i=0;i<SIZE;i++)
        printf("%d\t",z[i]);
    return 0;
}
void fillArrays(int x[],int y[]) // next time do it for 1 function and call it twice.
{
    int i,j;
    printf("Enter Array X : (SIZE=5)\n");
    for(i=0;i<SIZE;i++){
        scanf("%d",&x[i]);
    }
    printf("Enter Array y : (SIZE=5)\n");
    for(j=0;j<SIZE;j++){
        scanf("%d",&y[j]);
    }
}
void arraySum(int x[],int y[],int z[])
{
    int k;
    for(k=0;k<SIZE;k++){
        z[k] = x[k]+ y[k];
    }
}
