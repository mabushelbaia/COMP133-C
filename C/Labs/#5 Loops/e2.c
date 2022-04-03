#include <stdio.h>
int main(){
    int i=1;
    while (i<=50){
        if (i%4==0)
            printf("%d\n",i);
        i++;
    }
    return 0;
}