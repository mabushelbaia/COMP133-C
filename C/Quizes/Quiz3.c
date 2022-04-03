#include <stdio.h>
#define SIZE 10
void to_another_array(int a[],int b[]);
int main(){
    int a[SIZE];
    int b[SIZE] = {0};
    printf("Enter %d ELements : \n",SIZE);
    for(int i=0;i<SIZE;i++)
        scanf("%d",&a[i]);
    to_another_array(a,b);
    for(int k=0;k<SIZE;k++)
        printf("%d\t",b[k]);
    return 0;
}
void to_another_array(int a[],int b[]){
    for(int j=0;j<SIZE;j++){
        while(a[j] != 0){
            b[j] += a[j]%10;
            a[j] /= 10;
        }
    }
}