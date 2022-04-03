#include <stdio.h>
#define SIZE 10
void bubble_sort(int a[], int size);
int main()
{
    int a[SIZE]={0,1,2,3,4,5,6,7,8,9};
    bubble_sort(a,SIZE);
    for(int i=0;i<SIZE;i++)
        printf("%d\t",a[i]);
    return 0;
}
void bubble_sort(int a[], int size){
    int i , j , tmp;
    for (i = 0; i < size; i++){
        for (j = 0; j < size - 1; j++){
            if (a[j] < a[j + 1]) {	// swap if order is broken
            tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
            }
        }
    }
}