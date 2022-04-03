#include <stdio.h>
#include <math.h>
#define SIZE 10
void fill_array(int a[]);
void compareElements(int a[]);
int main()
{
    int compare[SIZE];
    fill_array(compare);
    compareElements(compare);
    return 0;
}
void fill_array(int a[]){
    for(int i = 0; i < SIZE;i++){
        scanf("%d",&a[i]);
    }
}
void compareElements(int a[]){
    int smallest = a[0];
    int i;
    int x;
    for(i=0;i<SIZE;i++)
    {
        if (a[i]<smallest){
            smallest = a[i];
            x = i;
        }



    }
    printf("Smallest Element : %d\n",smallest);
    printf("Element Location (INDEX): %d",x);
}