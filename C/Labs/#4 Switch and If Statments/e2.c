#include <stdio.h>
int main(){
    int n;
    printf("Please Enter The Integer\n");
    scanf("%d",&n);
    if (n%3==0)
        printf("Ddivisible By 3\n");
    else 
        printf("Not divisible by 3\n");
    return 0;
}