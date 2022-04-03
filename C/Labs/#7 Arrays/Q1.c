#include <stdio.h>
#include <math.h>
#define SIZE 10
void fill_array(int a[]);
void exchange(int a[],int b[]);
int main()
{
    int a[SIZE];
    int b[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    fill_array(a);
    exchange(a,b);
    return 0;
}
void fill_array(int a[]){
    for(int i = 0; i < SIZE;i++){
        scanf("%d",&a[i]);
    }
}
void exchange(int a[],int b[]){
    int i=0,temp;
    for(i;i<SIZE;i++){
        temp = a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    for (int j=0;j<SIZE;j++){ //just to check
        printf("Array A : %d\t Array B : %d\n",a[j],b[j]);
    }
}