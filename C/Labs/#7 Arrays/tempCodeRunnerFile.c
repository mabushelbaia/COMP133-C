#include <stdio.h>
int sum_third(int x){
    int sum = 0;
    while(x != 0){
        sum += (x%1000-x%100)/100;
        printf("\t%d\t",sum);
        x /= 1000;
        
    }
    return sum;
}
void main(){
    int num;
    while(num !=-1){
        printf("Enter ... \n");
        scanf("%d",&num);
        printf("%d\n",sum_third(num));
    }

}