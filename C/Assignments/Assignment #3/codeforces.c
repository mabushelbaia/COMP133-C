#include <stdio.h>
void main(){
    int w;
    scanf("%d",&w);
    if(1<=w && w<=100){
        if(w%2 == 0)
            printf("Yes");
        else
            printf("NO");
    }
}