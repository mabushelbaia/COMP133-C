#include <stdio.h>
int main(){
    char ch;
    int i=0;
    for(ch='a';ch<='z';ch++){
        printf("%c ",ch);
        i++;
        if(i%4==0)
            printf("\n");

    }
    return 0;
}