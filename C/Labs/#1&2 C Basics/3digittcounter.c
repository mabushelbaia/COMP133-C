#include <stdio.h>
int main(){
    int num;
    int sum = 0;
    int d1,d2,d3;
    printf("Please Enter 3 digits num :\n");
    scanf("%d",&num);
    d1 = num%10;
    d3 = num/100;
    d2=(num-d3*100)/10;
    sum = d1 + d2 + d3;
    printf("%d", sum);
    return 0;
}
