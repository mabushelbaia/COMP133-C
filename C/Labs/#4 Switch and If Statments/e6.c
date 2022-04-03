#include <stdio.h>
int main(){
    int largest;
    int i;
    int numbers[4];
    printf("Enter 5 numbers: \n");
    for(i = 0; i<5;i++){
        scanf("%d",&numbers[i]);
    }
    largest = numbers[0];
    for (i=0;i<5;i++){
        if(numbers[i]>largest)
            largest = numbers[i];
    }
    printf("%d",largest);
}    
