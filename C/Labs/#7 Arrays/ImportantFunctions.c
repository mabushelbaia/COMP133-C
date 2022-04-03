 #include <stdio.h>
#include <math.h>
#define SIZE 5
void fill_array(int a[],int size); //array and size
void print_array(int a[],int size);
void bubble_sort(int a[], int size);
void inverse_array(int a[],int size);
int linear_search(int a[],int size,int element);
int main(){
    int a[SIZE];
    fill_array(a,SIZE);
    int index = linear_search(a,SIZE,10);
    if (index == 0)
        printf("element not found");
    else  
        printf("%d",index);
    return 0;
}
void fill_array(int a[],int size){
    for(int i = 0; i < size;i++){
        scanf("%d",&a[i]);
    }
}
void print_array(int a[],int size){
    for(int j=0;j<size;j++){
        printf("%d\t",a[j]);
    }
}
void bubble_sort(int a[], int size){
    int i , j , tmp;
    for (i = 0; i < size; i++){
        for (j = 0; j < size - 1; j++){
            if (a[j] > a[j + 1]) {	// swap if order is broken
            tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
            }
        }
    }
}
void inverse_array(int a[],int size){
    int temp;
    for(int i=0;i<size/2;i++){
        temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1] = temp;
    }
}
int linear_search(int a[],int size,int element){
    for(int i=0;i<size;i++){
        if (a[i]==element)
            return i;
    }
    return 0;
}