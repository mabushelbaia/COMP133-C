#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// int  mulitpliy(int a,int b)
// {
//     if (b == 1)
//         return a;
//     else
//         return a + mulitpliy(a,b-1);
// }

// int divide(int a, int b){
//     if(a - b < 0){
//         return 0;
//     }
//     else {
//         return divide(a - b, b) + 1;
//     }
// }
// int powerx(int a , int b)
// {
//     if (b == 0)
//         return 1;
//     else 
//         return a * powerx(a,b-1);
// }
// void printArray(int arr[], int start, int len)
// {
//     /* Recursion base condition */
//     if(0 >= len)
//         return printf("%d, ", arr[0]);;
//     printArray(arr, start + 1, len); 
// }
void printit(int arr[],int i,int size){
    if (i>= size){
        return;
    }

    printf("%d",arr[i]);
    printit(arr,i+1,size);
        
}
int fibonatchi(int n){
    int ans;
    if( n==1 || n == 2)
        ans= 1;
    else
        ans=fibonatchi(n-2) + fibonatchi(n-1);
    return(ans);
    
}
void printarray(int a[],int size){
    if(size !=0){
        printf("%d\t",a[0]);
        printarray(&a[1],size-1);
    }
}
int main(){
    // // printf("%d",fibonatchi(60));
    // int n;
    // int first,second;
    // first = 1;
    // second = 1;
    // for(int i=2;i<7;i++){
    //     n = first + second;
    //     first = second;
    //     second = n;
    // }
    // printf("%d\t",n);

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printarray(arr,10);
    return 0;
}